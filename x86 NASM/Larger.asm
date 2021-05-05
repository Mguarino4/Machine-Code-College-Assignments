section .data

str: db 'Hello World!', 0Ah
var1: dd 51
var2: dd 54
var3: dd 57
result: dd 00h

section .text

global _start

_start:

	mov eax, dword [var1]
	mov ebx, dword [var2]

	cmp eax, ebx

	jge nextstate

	mov eax, ebx 

nextstate:

	mov ebx, dword [var3]

	cmp eax, ebx

	jge finalstate
	
	mov dword [result], ebx

	jmp print 
finalstate:
	
	mov dword [result], eax
	

print:

	mov eax, 4
	mov ebx, 1
	mov ecx, result
	mov edx, 1
	int 80h

	mov eax, 1
	mov ebx, 0
	int 80h
