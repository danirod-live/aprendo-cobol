      *> un bucle moderno

       IDENTIFICATION DIVISION.
       PROGRAM-ID. INLINE-PERFORM.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 COUNTER PIC 99.

       PROCEDURE DIVISION.
           PERFORM VARYING COUNTER FROM 1 BY 2 UNTIL COUNTER > 10
               DISPLAY COUNTER
           END-PERFORM.

       GOBACK.
           END PROGRAM INLINE-PERFORM.
