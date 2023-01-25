       IDENTIFICATION DIVISION.
       PROGRAM-ID. REDEFINES.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 LASCOSAS PIC 9999V9 VALUE 2345.6.
       01 OTROMODO PIC 999V99 REDEFINES LASCOSAS.
       01 OTRASCOSAS REDEFINES LASCOSAS.
           02 CAR1 PIC X.
           02 CAR2 PIC X.
           02 CAR3 PIC X.
           02 CAR4 PIC X.
           02 CAR5 PIC X.


       PROCEDURE DIVISION.
           DISPLAY LASCOSAS
           DISPLAY OTROMODO
           DISPLAY CAR1 " " CAR2 " " CAR3 " " CAR4 " " CAR5.
       GOBACK.
           END PROGRAM REDEFINES.