.586														; ������� ������ (��������� Pentium)
.model flat, stdcall										; ������ ������, ���������� � �������
includelib kernel32.lib										; ������������: ����������� � kernel32

ExitProcess PROTO: DWORD									; �������� ������� ��� ���������� �������� Windows 

.stack 4096													; ��������� ����� ������� 4 ���������	

.data
	array sdword 3, 8, 7, 5, 13, 4, 21, 115, 22, 24		; ������ ���������� 10-� ����������
	min dword ?
	
.code

getmin proc arr : sdword, count : dword						; ���������� ������� � �����������
	mov ESI, arr		
	mov EAX, [ESI];

	sub count, 1
	mov ECX, count											; ������� �������� �����
	loopStart:

		add ESI, 4
		cmp [ESI], EAX
		jae moreMetka				

		mov EAX, [ESI]

		moreMetka:
	loop loopStart

	ret														; ������� ��������� � �������� eax
getmin endp													

main proc													
    push lengthof array										
    push offset array										
    call getmin												
    mov min, eax											

	push 0													
	call ExitProcess										
main endp													
end main	