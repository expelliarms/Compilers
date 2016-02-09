	.section	.rodata
.LC0:
	.string	"GCD of two numbers using Recursion\n"
.LC1:
	.string	"Enter the number a\n"
.LC2:
	.string	"Enter the number b\n"
.LC3:
	.string	"GCD of a and b : "
.LC4:
	.string	"\n"
	.text
	.globl	calculateGCD
	.type	calculateGCD, @function
calculateGCD:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$20, %rsp
.L5:
	movl	8(%rbp), %eax
	cmpl	12(%rbp), %eax
	jne	.L0
	jmp	.L1
	jmp	.L1
.L0:
	movl	8(%rbp), %eax
	cmpl	12(%rbp), %eax
	jg	.L2
	jmp	.L3
	jmp	.L4
.L2:
	movl	8(%rbp), %eax
	movl	12(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	12(%rbp), %eax
	pushq	%rax
	movl	-4(%rbp), %eax
	pushq	%rax
	call	calculateGCD
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	leave
	ret
	.size	calculateGCD, .-calculateGCD
	jmp	.L5
.L3:
	movl	12(%rbp), %eax
	movl	8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	pushq	%rax
	movl	8(%rbp), %eax
	pushq	%rax
	call	calculateGCD
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	leave
	ret
	.size	calculateGCD, .-calculateGCD
.L4:
	jmp	.L5
.L1:
	movl	8(%rbp), %eax
	leave
	ret
	.size	calculateGCD, .-calculateGCD
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
	movl	$.LC0, %eax
	pushq	%rax
	call	prints
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC1, %eax
	pushq	%rax
	call	prints
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	-4(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$.LC2, %eax
	pushq	%rax
	call	prints
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	leal	-4(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	pushq	%rax
	call	readi
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	pushq	%rax
	movl	-8(%rbp), %eax
	pushq	%rax
	call	calculateGCD
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LC3, %eax
	pushq	%rax
	call	prints
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %eax
	pushq	%rax
	call	printi
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LC4, %eax
	pushq	%rax
	call	prints
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	leave
	ret
	.size	main, .-main
