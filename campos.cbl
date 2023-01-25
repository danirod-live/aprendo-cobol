      *> campos que no entiendo

       IDENTIFICATION DIVISION.
       PROGRAM-ID. CAMPOS.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 EMPLEADO.
           05 DATOS.
           10 NOMBRE PIC X(14) VALUE "DANI".
           10 APELLIDO PIC X(14) VALUE "ROD".
           05 FECHA.
           10 ANIO PIC 9999 VALUE 2023.
           10 MES PIC 99 VALUE 01.
           10 DIA PIC 99 VALUE 10.

       PROCEDURE DIVISION.
           DISPLAY EMPLEADO
           GOBACK.
           END PROGRAM CAMPOS.


