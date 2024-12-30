

INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC array:DWORD, num:DWORD
    
    mov esi,array
    mov edi,num
    mov ecx,7

lopnum:
 mov eax,0
 mov eax,[esi]
 cmp eax,0
 jz skipzero

 mov eax,[edi]
add eax,1 
mov [edi],eax 

    
skipzero:
add esi,4
    loop lopnum
    
    ret
asmfunc ENDP
end