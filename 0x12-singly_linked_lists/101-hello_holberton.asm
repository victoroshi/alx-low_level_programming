section .data ; Data section, initialized variables
	fmt db	"%s", 10, 0 ; The printf format, "\n",'0'
	msg db	"Hello, Holberton", 0 ; C string needs 0

	section .text ; Code section.
	extern printf ; the C function, to be called
	global main ; the standard gcc entry point

main:
	push	rbp ; set up stack frame, must be aligned
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0 ; or can be  xor  rax,rax
	ret ; return
