	.file	"fourth.cpp"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$56, %rsp
	movl	%edi, -164(%rbp)
	movq	%rsi, -176(%rbp)
	movl	$1, -144(%rbp)
	movl	$2, -140(%rbp)
	movl	$3, -136(%rbp)
	movl	$4, -132(%rbp)
	movl	$5, -128(%rbp)
	movl	$6, -124(%rbp)
	movl	$7, -120(%rbp)
	movl	$8, -116(%rbp)
	movl	$9, -112(%rbp)
	movl	$1, -96(%rbp)
	movl	$1, -92(%rbp)
	movl	$1, -88(%rbp)
	movl	$2, -84(%rbp)
	movl	$2, -80(%rbp)
	movl	$2, -76(%rbp)
	movl	$3, -72(%rbp)
	movl	$3, -68(%rbp)
	movl	$3, -64(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movl	$0, -16(%rbp)
	movl	$0, -156(%rbp)
	jmp	.L2
.L7:
	movl	$0, -152(%rbp)
	jmp	.L3
.L6:
	movl	$0, -148(%rbp)
	jmp	.L4
.L5:
	movl	-152(%rbp), %eax
	movslq	%eax, %rcx
	movl	-156(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	addq	%rcx, %rax
	movl	-48(%rbp,%rax,4), %ecx
	movl	-148(%rbp), %eax
	movslq	%eax, %rsi
	movl	-156(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	movl	-144(%rbp,%rax,4), %esi
	movl	-152(%rbp), %eax
	movslq	%eax, %rdi
	movl	-148(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	addq	%rdi, %rax
	movl	-96(%rbp,%rax,4), %eax
	imull	%esi, %eax
	addl	%eax, %ecx
	movl	-152(%rbp), %eax
	movslq	%eax, %rsi
	movl	-156(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	movl	%ecx, -48(%rbp,%rax,4)
	addl	$1, -148(%rbp)
.L4:
	cmpl	$2, -148(%rbp)
	jle	.L5
	addl	$1, -152(%rbp)
.L3:
	cmpl	$2, -152(%rbp)
	jle	.L6
	addl	$1, -156(%rbp)
.L2:
	cmpl	$2, -156(%rbp)
	jle	.L7
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.9.2-0ubuntu1~14.04) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
