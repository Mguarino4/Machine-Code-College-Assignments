section .data
number: dw 53

section .text
global _start

_start:

	mov ecx, 5
	
	mov eax, [number]

nextNumber:

	push ecx
	push eax

	mov eax, 4
	mov ebx, 1
	mov ecx, number
	mov edx, 1
	int 80h

	pop eax
	dec eax
	mov [number], eax

	pop ecx
	dec ecx
	
	cmp ecx, 0 ;
	
	jge nextNumber
	

	mov eax, 1
	mov ebx, 0
	int 80h
