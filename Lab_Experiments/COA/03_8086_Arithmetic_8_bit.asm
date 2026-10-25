.MODEL SMALL
.STACK 100H
.DATA
DATA1 DB 10
DATA2 DB 05
ADD_RES DB ?
SUB_RES DB ?
MUL_RES DW ?
QUOTIENT DB ?
REMAINDER DB ?
.CODE
MAIN PROC
MOV AX, @DATA
MOV DS, AX
;-------------------------
; Addition
;-------------------------
MOV AL, DATA1
MOV BL, DATA2
ADD AL, BL
MOV ADD_RES, AL
;-------------------------
; Subtraction
;-------------------------
MOV AL, DATA1
MOV BL, DATA2
SUB AL, BL
MOV SUB_RES, AL
;-------------------------
; Multiplication
;-------------------------
MOV AL, DATA1
MOV BL, DATA2
MUL BL
MOV MUL_RES, AX
;-------------------------
; Division
;-------------------------
MOV AX, 0000H
MOV AL, DATA1
MOV BL, DATA2
DIV BL
MOV QUOTIENT, AL
MOV REMAINDER, AH
MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN
