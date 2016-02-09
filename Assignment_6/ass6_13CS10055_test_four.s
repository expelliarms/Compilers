	.section	.rodata
.LC0:
	.string	"Enter a year \n"
.LC1:
	.string	"Given year is a leap year \n"
.LC2:
	.string	"Given year is a leap year \n"
.LC3:
	.string	"Given year is a leap year \n"
.LC4:
	.string	"Given year is not a leap year \n"
	.text
	.comm	u,4
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$84, %rsp
	movl	$.LC0, %eax
	pushq	%rax
	call	prints
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, u
	leal	u, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$400, %eax
	movl	%eax, -32(%rbp)
	movl	-8(%rbp), %eax
	cltd
	idivl	-32(%rbp)
	movl	%edx, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$100, %eax
	movl	%eax, -40(%rbp)
	movl	-8(%rbp), %eax
	cltd
	idivl	-40(%rbp)
	movl	%edx, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$4, %eax
	movl	%eax, -48(%rbp)
	movl	-8(%rbp), %eax
	cltd
	idivl	-48(%rbp)
	movl	%edx, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, %eax
	movl	%eax, -56(%rbp)
	movl	-12(%rbp), %eax
	cmpl	-56(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$.LC1, %eax
	pushq	%rax
	call	prints
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, u
	jmp	.L2
.L1:
	movl	$0, %eax
	movl	%eax, -64(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-64(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L2
.L3:
	movl	$.LC2, %eax
	pushq	%rax
	call	prints
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, u
	jmp	.L2
.L4:
	movl	$0, %eax
	movl	%eax, -72(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-72(%rbp), %eax
	je	.L5
	jmp	.L6
	jmp	.L2
.L5:
	movl	$.LC3, %eax
	pushq	%rax
	call	prints
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, u
	jmp	.L2
.L6:
	movl	$.LC4, %eax
	pushq	%rax
	call	prints
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, u
.L2:
	movl	$0, %eax
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	leave
	ret
	.size	main, .-main
