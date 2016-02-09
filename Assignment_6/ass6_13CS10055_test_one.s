	.section	.rodata
.LC0:
	.string	"Check Odd or even using modulous operator\n"
.LC1:
	.string	"is Even\n"
.LC2:
	.string	"is Odd\n"
.LC3:
	.string	"Check Odd or even using bitwise operator\n"
.LC4:
	.string	"is Even\n"
.LC5:
	.string	"is Odd\n"
.LC6:
	.string	"Check Odd or even without using bitwise or modulus operator\n"
.LC7:
	.string	"is Even\n"
.LC8:
	.string	"is Odd\n"
.LC9:
	.string	"Enter an integer\n"
	.text
	.comm	x,4
	.globl	oddoreven1
	.type	oddoreven1, @function
oddoreven1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
	movl	$.LC0, %eax
	pushq	%rax
	call	prints
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$2, %eax
	movl	%eax, -16(%rbp)
	movl	8(%rbp), %eax
	cltd
	idivl	-16(%rbp)
	movl	%edx, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, %eax
	movl	%eax, -24(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %eax
	pushq	%rax
	call	prints
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L1:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC2, %eax
	pushq	%rax
	call	prints
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
.L2:
	nop
	leave
	ret
	.size	oddoreven1, .-oddoreven1
	.globl	oddoreven2
	.type	oddoreven2, @function
oddoreven2:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
	movl	$.LC3, %eax
	pushq	%rax
	call	prints
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$1, %eax
	movl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L5
.L3:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC4, %eax
	pushq	%rax
	call	prints
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L5
.L4:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC5, %eax
	pushq	%rax
	call	prints
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
.L5:
	nop
	leave
	ret
	.size	oddoreven2, .-oddoreven2
	.globl	oddoreven3
	.type	oddoreven3, @function
oddoreven3:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$44, %rsp
	movl	$.LC6, %eax
	pushq	%rax
	call	prints
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$2, %eax
	movl	%eax, -16(%rbp)
	movl	8(%rbp), %eax
	cltd
	idivl	-16(%rbp)
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$2, %eax
	movl	%eax, -24(%rbp)
	movl	-12(%rbp), %eax
	imull	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cmpl	8(%rbp), %eax
	je	.L6
	jmp	.L7
	jmp	.L8
.L6:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC7, %eax
	pushq	%rax
	call	prints
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L8
.L7:
	movl	8(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC8, %eax
	pushq	%rax
	call	prints
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
.L8:
	nop
	leave
	ret
	.size	oddoreven3, .-oddoreven3
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$24, %rsp
	movl	$.LC9, %eax
	pushq	%rax
	call	prints
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	pushq	%rax
	call	oddoreven1
	movl	-8(%rbp), %eax
	pushq	%rax
	call	oddoreven2
	movl	-8(%rbp), %eax
	pushq	%rax
	call	oddoreven3
	movl	$0, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	ret
	.size	main, .-main
