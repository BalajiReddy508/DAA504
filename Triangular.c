MOV AL,80H
 MOV DX,FFE6
 OUT DX,AL
Here: MOV AL,00H
 MOV DX,FFE0
XX: OUT DX,AL
 INC AL
 CMP AL,FFH
 JNE XX
YY : OUT DX,AL
 DEC AL
 CMP AL,00H
 JNE YY
 JMP Here
