/* Test case to test array operations and for loops*/
int main()
{
  int c, d, k, sum = 0;
  int first[3][3], second[3][3], product[3][3];
 
  for (c = 0; c < 3; c++)
    for (d = 0; d < 3; d++)
      first[c][d] = 2;

  for (c = 0; c < 3; c++)
    for (d = 0; d < 3; d++)
      second[c][d] = c + d;
 
  for (c = 0; c < 3; c++) {
    for (d = 0; d < 3; d++) {
      for (k = 0; k < 3; k++) {
        sum = sum + first[c][k]*second[k][d];
      }
      product[c][d] = sum;
      sum = 0;
    }
  }
 
  return 0;
}