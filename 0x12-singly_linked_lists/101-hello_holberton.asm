section	.data
	hello db "Hello, Holberton", 0

section .text
	global main
	extern printf
main:
	sub rsp, 8	; align the stack

	mov rdi, hello	; format string
	call printf	; call printf function

	add rsp, 8	; restore the stack
	ret
