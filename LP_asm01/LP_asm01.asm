.586														; система команд (процессор Pentium)
.model flat, stdcall										; модель пам€ти, соглашение о вызовах
includelib kernel32.lib										; компановщику: компоновать с kernel32

ExitProcess PROTO: DWORD									; прототип функции дл€ завершени€ процесса Windows 

.stack 4096													; выделение стека объЄмом 4 мегабайта	

.data
	array sdword 3, 8, 7, 5, 13, 4, 21, 115, 22, 24		; массив заполненый 10-ю значени€ми
	min dword ?
	
.code

getmin proc arr : sdword, count : dword						; объ€вление функции с параметрами
	mov ESI, arr		
	mov EAX, [ESI];

	sub count, 1
	mov ECX, count											; регистр счетчика цикла
	loopStart:

		add ESI, 4
		cmp [ESI], EAX
		jae moreMetka				

		mov EAX, [ESI]

		moreMetka:
	loop loopStart

	ret														; возврат результат в регистре eax
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