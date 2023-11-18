	global main
	extern printf

	section .data
msg:	db	"Hello, Holberton", 0
format: db "%s", 10, 0
	section .text
main:
	mov esi, msg
	mov edi, format
	mov ax, 0
	call printf

	mov eax, 0
	ret
