.MODEL SMALL
.STACK 100H
.DATA
  DATA1 DB 92H               ; First 8-bit operand (92H / 10010010B)
  DATA2 DB 6AH               ; Second 8-bit operand (6AH / 01101010B)
  AND_RES DB ?               ; Variable to store AND operation result
  OR_RES DB ?               ; Variable to store OR operation result
  XOR_RES DB ?               ; Variable to store XOR operation result
 NOT_RES DB ?                 ; Variable to store NOT operation result
.CODE
MAIN PROC
 ; Initialize Data Segment
 MOV AX, @DATA
 MOV DS, AX
 ;-----------------------------------------
 ; 1. AND Operation
 ;-----------------------------------------
 MOV AL, DATA1                 ; AL = 92H
 MOV BL, DATA2                 ; BL = 6AH
 AND AL, BL                 ; AL = AL AND BL (Result = 02H)
 MOV AND_RES, AL                  ; Store AND result
 ;-----------------------------------------
 ; 2. OR Operation
 ;-----------------------------------------
 MOV AL, DATA1                 ; AL = 92H
 MOV BL, DATA2                 ; BL = 6AH
 OR AL, BL                ; AL = AL OR BL (Result = FAH)
 MOV OR_RES, AL                  ; Store OR result
 ;-----------------------------------------
 ; 3. XOR Operation
 ;-----------------------------------------
 MOV AL, DATA1                 ; AL = 92H
 MOV BL, DATA2                 ; BL = 6AH
 XOR AL, BL                 ; AL = AL XOR BL (Result = F8H)
 MOV XOR_RES, AL                  ; Store XOR result
 ;-----------------------------------------
 ; 4. NOT Operation
 ;-----------------------------------------
 MOV AL, DATA1                 ; AL = 92H
 NOT AL                  ; AL = NOT AL (Result = 6DH)
 MOV NOT_RES, AL                  ; Store NOT result
 ; Return control to DOS
 MOV AH, 4CH
 INT 21H
 MAIN ENDP
END MAIN
