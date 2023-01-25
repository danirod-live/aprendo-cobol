      *> ahora con if-else

       IDENTIFICATION DIVISION.
       PROGRAM-ID. IFELSE.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 RESULT PIC 99.

       PROCEDURE DIVISION.
           MULTIPLY 6 BY 7 GIVING RESULT.
           IF RESULT IS EQUAL TO 42 THEN
                 DISPLAY "TODO VA BIEN " RESULT
           ELSE
                 DISPLAY "ALGO VA MUY MAL " RESULT
           END-IF

           GOBACK.
           END PROGRAM IFELSE.
