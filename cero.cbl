       IDENTIFICATION DIVISION.
       PROGRAM-ID. CERO.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 VAR1 PIC 9 VALUE 6.
       01 VAR2 PIC 9 VALUE 4.
       01 VAR3 PIC 9 VALUE 0.

       PROCEDURE DIVISION.
           SUBTRACT VAR1 FROM VAR2 GIVING VAR3.
           DISPLAY VAR1 " - " VAR2 " = " VAR3.
           END PROGRAM CERO.