      *> es como switch pero mas potente

       IDENTIFICATION DIVISION.
       PROGRAM-ID. EVALUATING.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 FIRST-FIELD PIC 9.
       01 SECOND-FIELD PIC X.
       01 THIRD-FIELD PIC 9.

       PROCEDURE DIVISION.
           MOVE 1 TO FIRST-FIELD
           MOVE "C" TO SECOND-FIELD.
           MOVE 5 TO THIRD-FIELD.

           EVALUATE FIRST-FIELD ALSO SECOND-FIELD ALSO THIRD-FIELD
               WHEN = 1         ALSO = "A" ALSO ANY
                   DISPLAY "VALE 1A"
               WHEN = 1         ALSO = "B" ALSO ANY
                   DISPLAY "VALE 1B"
               WHEN = 1         ALSO = "C" ALSO = 2
                   DISPLAY "VALE 1C"
                   DISPLAY "ESTE ES EL QUE SE VA A EJECUTAR REALMENTE"
               WHEN = 1         ALSO ANY ALSO ANY
                   DISPLAY "ESTE ES VERDADERO PERO COMO YA SE HA"
                   DISPLAY "EJECUTADO UNO, NO SE VA A EJECUTAR"
               WHEN OTHER
                   PERFORM NO-MATCHES
       END-EVALUATE.

       GOBACK.

       NO-MATCHES.
           DISPLAY "NO HAY MATCHES PARA " FIRST-FIELD " , " SECOND-FIELD
           .
           END PROGRAM EVALUATING.
