	.section	.rodata
.LC0:
	.string	"\na+b="
.LC1:
	.string	"\na-b="
.LC2:
	.string	"\na*b="
.LC3:
	.string	"\na/b="
.LC4:
	.string	"\na mod b="
.LC5:
	.string	"\n+a="
.LC6:
	.string	"\n-b="
	.text
	.comm	n1,4
	.comm	n2,4
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
	movl	$9, %eax
	movl	%eax, -8(%rbp)
	movl	$4, %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %eax
	movl	-20(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC0, %eax
	pushq	%rax
	call	prints
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movl	-20(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC1, %eax
	pushq	%rax
	call	prints
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC2, %eax
	pushq	%rax
	call	prints
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC3, %eax
	pushq	%rax
	call	prints
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC4, %eax
	pushq	%rax
	call	prints
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC5, %eax
	pushq	%rax
	call	prints
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	negl	%eax
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LC6, %eax
	pushq	%rax
	call	prints
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	leave
	ret
	.size	main, .-main
