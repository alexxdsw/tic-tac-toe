

Acest cod implementează un joc de Tic-Tac-Toe în limbajul C++, unde doi jucători își aleg simboluri (X și O) și alternează pentru a marca sloturi pe o tablă de 3x3. Scopul este să creezi o linie de 3 simboluri (pe rânduri, coloane sau diagonale) pentru a câștiga. Codul include funcții pentru afișarea tablei, plasarea simbolurilor și verificarea câștigătorului.

Funcții cheie:
drawBoard(): Afișează starea actuală a tablei de joc.
placeMarker(): Plasează simbolul (X sau O) pe tablă într-un slot liber. Verifică dacă slotul este deja ocupat.
checkWinner(): Verifică dacă un jucător a câștigat, verificând toate rândurile, coloanele și diagonalele.
swapPlayerAndMarker(): Schimbă între jucătorul 1 și jucătorul 2, alternând între simbolurile X și O.
game(): Coordonatorul principal al jocului, care gestionează rândurile, validarea sloturilor și anunțarea câștigătorului sau egalității.

Logica jocului:
Jucătorul 1 își alege simbolul (X sau O), iar jucătorul 2 primește automat simbolul rămas.
Jucătorii alternează plasând simboluri în sloturile libere.
După fiecare mutare, programul verifică dacă cineva a câștigat sau dacă toate sloturile sunt pline, ducând la egalitate.
Raport despre cum se joacă Tic-Tac-Toe:
Obiectivul jocului: Scopul fiecărui jucător este să obțină o linie de trei simboluri consecutive (orizontal, vertical sau diagonal) pe tabla de joc.
Pasul 1: Jucătorul 1 își alege simbolul (X sau O).
Pasul 2: Jucătorii își aleg pe rând un slot liber numerotat între 1 și 9 și își plasează simbolul ales (X sau O) în acel slot.
Pasul 3: După fiecare mutare, jocul verifică dacă există un câștigător.
Dacă un jucător reușește să alinieze trei simboluri, el câștigă.
Dacă toate sloturile sunt pline și nimeni nu a câștigat, jocul se termină cu egalitate.
Câștigător: Jocul se oprește imediat ce un jucător reușește să formeze o linie de trei simboluri consecutive, iar câștigătorul este anunțat.
Mod de joc:
Începe jocul și alege simbolul pentru Jucătorul 1.
Fiecare jucător își alege un slot pe care să-și plaseze simbolul.
Jocul continuă până când un jucător câștigă sau se ajunge la egalitate.
Concluzie:
Acest joc oferă o implementare completă a Tic-Tac-Toe pentru doi jucători. Codul gestionează eficient mutările și validările necesare pentru un joc corect, iar rezultatul este afișat imediat după ce unul dintre jucători câștigă sau dacă se ajunge la egalitate.
