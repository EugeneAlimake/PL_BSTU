.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD

.STACK 4098

.CONST

.DATA
MB_OK EQU 0
myBytes BYTE 10h, 20h, 30h, 40h
myWords WORD 8Ah, 3Bh, 44h,5Fh, 99h
myDoubles DWORD 1, 2, 8, 4, 5, 6
myPointer DWORD myDoubles    

 dwMS dw 1,2,0,4,5,6,7
 dwMD dw 7 dup(?)
HW DD ?

.CODE

main PROC
START:
mov esi,offset dwMS
mov edi,offset dwMD
mov eax,[esi]
mov[edi],eax

call ExitProcess
main ENDP

end main