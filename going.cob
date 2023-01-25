      *> ejemplo de go to (niños no miréis)
       IDENTIFICATION DIVISION.
       PROGRAM-ID. GOING.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 COUNTER PIC 9 VALUE 1.

       PROCEDURE DIVISION.
           DISPLAY COUNTER
           GO TO THE-BOTTOM
           DISPLAY "ESTA LINEA NUNCA SE VA A VER"
           GOBACK.
       THE-BOTTOM.
           DISPLAY "AHORA HEMOS TOCADO FONDO"
           GOBACK.
           END PROGRAM GOING.
