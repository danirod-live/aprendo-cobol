      *> no entiendo un caraho

       IDENTIFICATION DIVISION.
       PROGRAM-ID. CREDITO.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 CREDITO PIC $999.99CR.

       PROCEDURE DIVISION.
           MOVE -123.45 TO CREDITO.
           DISPLAY CREDITO.
       GOBACK.
           END PROGRAM CREDITO.
