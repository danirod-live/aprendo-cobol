      *> simple-data.cob
      *> Para que juegue con variables

       IDENTIFICATION DIVISION.
       PROGRAM-ID. SIMPLE-DATA.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 PROGRAM-MESSAGE  PIC X(64).
       01 ANSWER           PIC 99.

       PROCEDURE DIVISION.

           MOVE "mira mira mi ejemplo" TO PROGRAM-MESSAGE.
           DISPLAY PROGRAM-MESSAGE.

           COMPUTE ANSWER = 6 * 7.
           DISPLAY ANSWER.
           GOBACK.
           END PROGRAM SIMPLE-DATA.
