global main

main:
	mov edx,18
	mov ecx,text
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,1 
	int 0x80

section .data
	text db "Hello, Holberton",13,10
