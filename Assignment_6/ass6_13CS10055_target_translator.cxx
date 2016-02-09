# include "ass6_13CS10055_translator.h"
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

int SymbolTableSize(symbolTable *tempst)
{
  int i,size = 0,state = 0;
  symbolTableRow *tempRow = tempst->table;//tempRow has the pointer to the top row of the symbol table
  for(i = 0;i <= tempst->stNumRows; i++)//Iterate throught the rows of the symbol table
  {
    if(!strcmp(tempRow[i].srName,"retVal"))
      state = 1;
    else if(state == 1)
    {
      size += tempRow[i].size;
    }
  }
  return size;
}

/* Main Target translator function */
void targetTranslator()
{
  int i,size,offset;
  char *srName;
  quadArrayRow *temp = globalQArray->quadArraytop;
  for(i = 0;i < instCounter;i++)//Loop through the instructions
  {
    switch(temp[i].op)//Switch according to the operation of the quad
    {
      case Function : 
      {
        size = SymbolTableSize((temp[i].arg1_loc)->srNestedTable);
        srName = strdup(temp[i].Arg1);
        printf("\t.globl\t%s\n",temp[i].Arg1);
        printf("\t.type\t%s, @function\n",temp[i].Arg1);
        printf("%s:\n",temp[i].Arg1);
        printf("\tpushq\t%%rbp\n");
        printf("\tmovq\t%%rsp, %%rbp\n");
        printf("\tsubq\t$%d, %%rsp\n",size);
        break;
      }
      case RETURN_EXP : 
      { 
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        printf("\tleave\n");
        printf("\tret\n");
        printf("\t.size\t%s, .-%s\n",srName,srName);
        break;
      }
      case RETURN :     
      {
        if(s[i])
        printf("%s:\n",s[i]);
        printf("\tnop\n");
        printf("\tleave\n");
        printf("\tret\n");
        printf("\t.size\t%s, .-%s\n",srName,srName);
        break;
      }//End case
      case  PLUS :     
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%edx\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        printf("\taddl\t%%edx, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
       
      case  MINUS :     
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%edx\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        printf("\tsubl\t%%edx, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  INTO  :     
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\timull\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\timull\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  DIV :     
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        printf("\tcltd\n");
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tidivl\t%s\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tidivl\t%d(%%rbp)\n",offset);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  PERCENT :   
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        printf("\tcltd\n");
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tidivl\t%s\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tidivl\t%d(%%rbp)\n",offset);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%edx, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%edx, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  LESSTHAN  : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsetl\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  LESSTHANEQ  : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsetle\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  GREATERTHAN  : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsetg\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  GREATERTHANEQ  :
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsetge\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  EQUALTO  : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsete\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  NOTEQUALTO  : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
            printf("%s:\n",s[i]);
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tsetne\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  goto_LESSTHAN :
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tjl\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  goto_GREATERTHAN :
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tjg\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  goto_GREATERTHANEQ :
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tjge\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  goto_LESSTHANEQ :
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tjle\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  goto_EQUALTO : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tje\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  goto_NOTEQUALTO : 
      {
        offset = (temp[i].arg1_loc)->srOffset;
        if(s[i])
          printf("%s:\n",s[i]);                      
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);  
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tcmpl\t%d(%%rbp), %%eax\n",offset);
        printf("\tjne\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  GOTO  :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        printf("\tjmp\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  IF_GOTO : 
      {
        if(s[i])
          printf("%s:\n",s[i]);
          offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t$0, %s\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tcmpq\t$0, %d(%%rbp)\n",offset);
        printf("\tjne\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  IF_FALSE_GOTO :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t$0, %s\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tcmpq\t$0, %d(%%rbp)\n",offset);
        printf("\tje\t%s\n",s[atoi(temp[i].res)]);
        break;
      }//End case
      case  U_PLUS  :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset); 
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  U_MINUS  :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        printf("\tnegl\t%%eax\n"); 
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  U_NEGATION :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tcmpl\t$0, %s\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tcmpl\t$0, %d(%%rbp)\n",offset);
        printf("\tsete\t%%al\n");
        printf("\tmovzbl\t%%al, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  U_ADDR  : 
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tleal\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tleal\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  U_STAR  : 
      {
        if(s[i])
        printf("%s:\n",s[i]);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        printf("\tmovl\t(%%eax), %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  ASSIGN  : 
      {
        if(s[i])
          printf("%s:\n",s[i]);
        if(!(temp[i].arg1_loc))
           printf("\tmovl\t$%s, %%eax\n",temp[i].Arg1);
        else
        {
          if((temp[i].arg1_loc)->Type->tNodeType == ARRAY)
          {
            offset = (temp[i].arg1_loc)->srOffset;
            if(offset == -1)
              printf("\tleal\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
            else
              printf("\tleal\t%d(%%rbp), %%eax\n",offset);
          }
          else
          {
            offset = (temp[i].arg1_loc)->srOffset;
            if(offset == -1)
              printf("\tmovl\t%s, %%eax\n",(temp[i].arg1_loc)->srName);
            else
              printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
          } 
        }
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  LEFT_STAR  : 
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg1_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%edx\n",(temp[i].arg1_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        printf("\tmovl\t%%edx, (%%eax)\n");
        break;
      }//End case  
      case  EQ_BRACKET  :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg1_loc)->srOffset;
        if((temp[i].arg1_loc)->Type->tNodeType == POINTER)
        {
          if(offset == -1)
            printf("\tmovl\t%s, %%edx\n",(temp[i].arg1_loc)->srName);
          else
            printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        }
        else
        {
          if(offset == -1)
            printf("\tleal\t%s, %%edx\n",(temp[i].arg1_loc)->srName);
          else
          {
            printf("\tleal\t%d(%%rbp), %%edx\n",offset);
          }
        }
        printf("\taddl\t%%edx, %%eax\n");
        printf("\tmovl\t(%%eax), %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  BRACKET_EQ  :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        offset = (temp[i].arg2_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%eax\n",(temp[i].arg2_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
        offset = (temp[i].arg1_loc)->srOffset;
        if((temp[i].arg1_loc)->Type->tNodeType == POINTER)
        {
          if(offset == -1)
            printf("\tmovl\t%s, %%edx\n",(temp[i].arg1_loc)->srName);
          else
            printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        }
        else
        {
          if(offset == -1)
            printf("\tleal\t%s, %%edx\n",(temp[i].arg1_loc)->srName);
          else
          {
            printf("\tleal\t%d(%%rbp), %%edx\n",offset);
          }
        }
        printf("\taddl\t%%edx, %%eax\n");
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%s, %%edx\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%d(%%rbp), %%edx\n",offset);
        printf("\tmovl\t%%edx, (%%eax)\n");
        break;
      }//End case
      case  call :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        printf("\tcall\t%s\n",temp[i].Arg1);
        offset = (temp[i].res_loc)->srOffset;
        if(offset == -1)
          printf("\tmovl\t%%eax, %s\n",(temp[i].res_loc)->srName);
        else
          printf("\tmovl\t%%eax, %d(%%rbp)\n",offset);
        break;
      }//End case
      case  call_void :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        printf("\tcall\t%s\n",temp[i].Arg1);
        break;
      }//End case
      case  PARAM :
      {
        if(s[i])
          printf("%s:\n",s[i]);
        int j;
        for(j=i;;j++)
        {
          if(temp[j].op == call || temp[j].op == call_void)
            break;
        }
        j--;
        int t = j;
        while(j>=i)
        {
          offset = (temp[j].arg1_loc)->srOffset;
          if((temp[j].arg1_loc)->size == -1)
            printf("\tmovl\t$%s, %%eax\n",temp[j].Arg1);
          else if((temp[j].arg1_loc)->Type->tNodeType == ARRAY)
          {
            if(offset == -1)
              printf("\tleal\t%s, %%eax\n",(temp[j].arg1_loc)->srName);
            else
              printf("\tleal\t%d(%%rbp), %%eax\n",offset);  
          }
          else
          {
            if(offset == -1)
              printf("\tmovl\t%s, %%eax\n",(temp[j].arg1_loc)->srName);
            else
              printf("\tmovl\t%d(%%rbp), %%eax\n",offset);
          }
          printf("\tpushq\t%%rax\n");
          j--;
        }
        i = t;
        break;
      }//End case
    }//End switch
  }//End For
}

void updateSToffsets()
{
  int i,j;
  int off_param = 8, loc_param = 0;
  int state = 0;
  symbolTable *temp;
  for(i = 0; i<= globalST->stNumRows; i++)
  {
    if((globalST->table[i]).srNestedTable)
    {
      temp = (globalST->table[i]).srNestedTable;
      off_param = 8;
      loc_param = 0;
      state = 0;
      for(j = 0;j <= temp->stNumRows; j++)
      {
        if(!strcmp((temp->table[j]).srName, "retVal"))
        {
          state = 1;
        }
        else
        {
          if(state)
          {
            loc_param -= (temp->table[j]).size;
            (temp->table[j]).srOffset = loc_param;
          }
          else
          {
            (temp->table[j]).srOffset = off_param;
            off_param += (temp->table[j]).size;
          }//end else
        }//end else
      }//End for
    }//End if
  }//End for
}

int label_number = 0;
void generate_labels(char **s)
{
  int i,label;
  quadArrayRow *q;
  for(i = 0;i<instCounter;i++)
  {
    q = (globalQArray->quadArraytop) + i;
    if(q->op == goto_LESSTHAN || q->op == goto_LESSTHANEQ || q->op == goto_GREATERTHAN || q->op == goto_GREATERTHANEQ || q->op == goto_EQUALTO || q->op == goto_NOTEQUALTO || q->op == GOTO || q->op == IF_GOTO || q->op == IF_FALSE_GOTO)
    {
      label = atoi(q->res);
      if(s[label] == 0)
      {
        s[label] = new char[10];
        sprintf(s[label],".L%d",label_number);
        label_number++;
      }
    }
  }
}

void ConstantsTable()
{
  int i;
  if(count_toc>0)
    printf("\t.section\t.rodata\n");
  for(i=0;i<count_toc;i++)
  {
    printf(".LC%d:\n",i);
    printf("\t.string\t%s\n",constsTable[i]);
  }
  printf("\t.text\n");
}

void update_glbl_gen_dt()
{
  int i,j = 0;
  symbolTableRow *temp = globalST->table;
  for(i = 0;i <= globalST->stNumRows;i++)
  {
    if(!((temp[i]).srNestedTable))
    {
      temp[i].srOffset = -1;
      if(temp[i].srInitialValue)
      {
        /* first obtain initial value */
        int init_val;
        int *m;
        char *m1;
        if((temp[i].Type)->tNodeType == INT)
        {
          m = (int *)(temp[i].srInitialValue);
          init_val = *m;
        }
        else
        { // Type is char
          m1 = (char *)(temp[i].srInitialValue);
          init_val = (int)(*m1);
        }
        /* Assembly code generator */
        printf("\t.globl\t%s\n",temp[i].srName);
        if(j == 0)
        {
          printf("\t.data\n");
          j = 1;
        }
        printf("\t.type\t%s, @object\n",temp[i].srName);
        printf("\t.size\t%s, %d\n",temp[i].srName,temp[i].size);
        printf("%s:\n",temp[i].srName);
        printf("\t.long\t%d\n",init_val);
      }
      else
      {
        printf("\t.comm\t%s,%d\n",temp[i].srName,temp[i].size);
      }
    }
  }
}

void updateSTsize(symbolTable *t) 
{
  int i;
  symbolTableRow *temp = t->table;
  tNode *p;
  for(i = 0;i<=t->stNumRows;i++)
  {
    if(!temp[i].srNestedTable)
    {
      p = temp[i].Type;
      while(p)
      {
        if(p->tNodeType == POINTER || p->tNodeType == INT)
          break;
        if(p->tNodeType == CHAR){
          temp[i].size *= 4;
          break;
        }
        p = p->right;
      }
    }
    else
      updateSTsize(temp[i].srNestedTable);
  }
}

/* --- Main function --- */
int main()
{
  globalST = createSymbolTable();//Create global symbol table
  localST = globalST;//Currently local symbol table is same as global symbol table
  globalQArray = new quadArray(1000);//Declare quad array
  int i;
  constsTable = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)
    constsTable[i] = 0;
  s = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)
    s[i] = 0;
  int x = yyparse();
  updateSTsize(globalST);
  updateSToffsets();
  generate_labels(s);
  ConstantsTable();
  update_glbl_gen_dt();
  targetTranslator();
  return 0;
}