section .data

str: db 'Mikey Guarino' , 0Ah

section .text

global _start

_start:

	mov eax, 4
	mov ebx, 1
	mov ecx, str
	mov edx, 14
	int 80h 

	mov eax, 1
	mov ebx, 0
	int 80h
