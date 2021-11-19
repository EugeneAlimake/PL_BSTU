.586																	; ������� ������ (��������� Pentium)
.model flat, stdcall													; ������ ������, ���������� � �������
includelib kernel32.lib													; ������������: ����������� � kernel32
includelib C:\\Users\\thesi\\Desktop\\LP_asm01\\LP_asm01\\Debug\\LP_asm01a.lib

ExitProcess PROTO: DWORD									; �������� ������� ��� ���������� �������� Windows 
GetStdHandle PROTO: DWORD									; �������� handle ������ �� ������� 
															; (��������� ����������� �������� -10 ����, -11 �����, -12 ������ ���������� ������)
WriteConsoleA PROTO: DWORD,: DWORD,: DWORD,: DWORD,: DWORD	; ����� �� ������� (����������� �-��)
SetConsoleTitleA PROTO: DWORD								; �������� �-�� ��������������� ��������� ����������� ���� (������� �����������)

getmin PROTO :DWORD, :DWORD
getmax PROTO :DWORD, :DWORD

.stack 4096													; ��������� ����� ������� 4 ���������

.const														; ���������
	consoleTitle byte 'LP_asm01', 0							; ������, ������ ������� ������ + ������� ���
	handleOutput sdword -11									; ��� �� ������ ���������� ������ � �������
	array sdword 31, 4, 18, 19, 89, 14, 2, 10, 1, 11		; ������ ���������� 10-� ����������
	text byte 'getmax-getmin =', 0							; ������ ��� ������ ������	

.data
	consoleHandle dword 0h									; ��������� �������
	max sdword ?
	min sdword ?
	result sdword ?
	resultString byte 4 dup(0)

.code

int_to_char PROC uses eax ebx ecx edi esi, ; �������� �-�� ������. ����� � ������
								pstr: dword, ; ����� ������ ����������
							intfield: sdword ; ����� ��� ��������������

	mov edi, pstr					; �������� �� pstr � edi
	mov esi, 0						; ���-�� �������� � ����������
	mov eax, intfield				; ����� -> � eax
	cdq								; ���� ����� ���������������� � eax �� edx
	mov ebx, 10						; ��������� ������� ��������� (10)-> ebx
	idiv ebx						; eax/ebx (�.�. - eax, ���. - edx)
	test eax, 80000000h				; ��������� �������� ���
	jz plus							; ���� ������������� ����� �� plus
	neg eax							; ������ ����
	neg edx							; ������ ����
	;mov cl, '-'						; ������ ������ ���������� '-'
	;mov[edi], cl					; ������ ������ ���������� '-'
	inc edi							; ++edi
plus:								; ���� ���������� �� �������� 10

	push dx							; �������-> ����
	inc esi							; ++esi
	test eax, eax					; eax==?
	jz fin							; ���� �� �� �� fin
	cdq								; ���� ��������������� � eax �� edx
	idiv ebx						; eax=eax/ebx, ������� � edx
	jmp plus						; ����������� ������� �� plus
fin:

	mov ecx ,esi					; � ecx ���-�� �� 0-�� ��������=���-�� �������� ����������

write:								; ���� ������ ����������

	pop bx							; ������� �� �����->bx
	add bl,'0'						; ������������ ������ � bl
	mov[edi], bl					; bl->���������
	inc edi							; edi++
	loop write						; ���� (--ecx)>0 ������� �� write
	ret

int_to_char ENDP

main PROC										        ; ����� ����� main
			
	invoke getmax, offset array, lengthof array
    mov max, eax										; ��������� � min

	invoke getmin, offset array, lengthof array

	sub eax, max										; 
	mov result, eax										;
											        
	invoke SetConsoleTitleA,  offset consoleTitle		; �������� � ���� �������� ������� SetConsoleTitle ������ � �������� ������� �������� ��������� ����
	invoke GetStdHandle, handleOutput					; �������� � ���� ��� ����������� �� ����� � ������� � �������� �-�� �������� ���������� �� �����
	mov consoleHandle, eax						        ; �������� ���������� ���������� �� �������� eax

	
	invoke WriteConsoleA, consoleHandle, offset text, sizeof text, 0, 0
	invoke int_to_char, offset resultString, result

	invoke WriteConsoleA, consoleHandle, offset resultString, sizeof resultString, 0, 0

	invoke ExitProcess, 0

main ENDP												; ����� ���������
end main