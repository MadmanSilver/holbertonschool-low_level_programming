global main

main:
	mov rdx,18
	mov rsi,text
	mov rdi,1
	mov rax,1
	syscall

	mov rdi,0
	mov rax,3 
	syscall

section .data
	text db "Hello, Holberton",13,10
