	.section	.rodata
.LC0:
	.string	"\nEnter a: "
.LC1:
	.string	"\nEnter b: "
.LC2:
	.string	"\nEnter c : "
.LC3:
	.string	"\na = "
.LC4:
	.string	"\nb = "
.LC5:
	.string	"\nc = "
.LC6:
	.string	"\nCycle function called"
.LC7:
	.string	"\na = "
.LC8:
	.string	"\nb = "
.LC9:
	.string	"\nc = "
.LC10:
	.string	"\nYou entered non numeral characters"
.LC11:
	.string	"\nThe program is exiting"
.LC12:
	.string	"\nYou entered non numeral characters"
.LC13:
	.string	"\nThe program is exiting"
.LC14:
	.string	"\nYou entered non numeral characters"
.LC15:
	.string	"\nThe program is exiting"
	.text
	.comm	error,4
	.globl	Cycle
	.type	Cycle, @function
Cycle:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	12(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	8(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%rbp)
	movl	12(%rbp), %eax
	movl	-12(%rbp), %edx
	movl	%edx, (%eax)
	movl	16(%rbp), %eax
	movl	(%eax), %eax
	movl	%eax, -16(%rbp)
	movl	8(%rbp), %eax
	movl	-16(%rbp), %edx
	movl	%edx, (%eax)
	movl	16(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%edx, (%eax)
	nop
	leave
	ret
	.size	Cycle, .-Cycle
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$160, %rsp
	movl	$.LC0, %eax
	pushq	%rax
	call	prints
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	error, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, %eax
	movl	%eax, -36(%rbp)
	movl	error, %eax
	cmpl	-36(%rbp), %eax
	je	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$.LC1, %eax
	pushq	%rax
	call	prints
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	error, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, %eax
	movl	%eax, -52(%rbp)
	movl	error, %eax
	cmpl	-52(%rbp), %eax
	je	.L3
	jmp	.L4
	jmp	.L5
.L3:
	movl	$.LC2, %eax
	pushq	%rax
	call	prints
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	error, %eax
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, %eax
	movl	%eax, -68(%rbp)
	movl	error, %eax
	cmpl	-68(%rbp), %eax
	je	.L6
	jmp	.L7
	jmp	.L8
.L6:
	movl	$.LC3, %eax
	pushq	%rax
	call	prints
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC4, %eax
	pushq	%rax
	call	prints
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC5, %eax
	pushq	%rax
	call	prints
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC6, %eax
	pushq	%rax
	call	prints
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	-12(%rbp), %eax
	movl	%eax, -100(%rbp)
	leal	-16(%rbp), %eax
	movl	%eax, -104(%rbp)
	leal	-20(%rbp), %eax
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	pushq	%rax
	movl	-104(%rbp), %eax
	pushq	%rax
	movl	-100(%rbp), %eax
	pushq	%rax
	call	Cycle
	movl	$.LC7, %eax
	pushq	%rax
	call	prints
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC8, %eax
	pushq	%rax
	call	prints
	movl	%eax, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -124(%rbp)
	movl	-124(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC9, %eax
	pushq	%rax
	call	prints
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L7:
	movl	$.LC10, %eax
	pushq	%rax
	call	prints
	movl	%eax, -136(%rbp)
	movl	-136(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC11, %eax
	pushq	%rax
	call	prints
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	movl	%eax, -4(%rbp)
.L8:
	jmp	.L2
.L4:
	movl	$.LC12, %eax
	pushq	%rax
	call	prints
	movl	%eax, -144(%rbp)
	movl	-144(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC13, %eax
	pushq	%rax
	call	prints
	movl	%eax, -148(%rbp)
	movl	-148(%rbp), %eax
	movl	%eax, -4(%rbp)
.L5:
	jmp	.L2
.L1:
	movl	$.LC14, %eax
	pushq	%rax
	call	prints
	movl	%eax, -152(%rbp)
	movl	-152(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC15, %eax
	pushq	%rax
	call	prints
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -4(%rbp)
.L2:
	movl	$0, %eax
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	leave
	ret
	.size	main, .-main
