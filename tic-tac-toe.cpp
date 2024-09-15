#include <iostream>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char current_marker;
int current_player;

// Funcția care afișează tabla de joc
void drawBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

// Funcția care marchează pe tablă
bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    } else {
        return false;
    }
}

// Funcția care verifică dacă cineva a câștigat
int checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return current_player;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return current_player;
        }
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return current_player;
    }
    
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return current_player;
    }

    return 0;
}

// Funcția pentru schimbarea jucătorilor
void swapPlayerAndMarker() {
    if (current_marker == 'X') {
        current_marker = 'O';
    } else {
        current_marker = 'X';
    }

    if (current_player == 1) {
        current_player = 2;
    } else {
        current_player = 1;
    }
}

void game() {
    cout << "Jucatorul 1, alege markerul (X sau O): ";
    char marker_p1;
    cin >> marker_p1;

    current_player = 1;
    current_marker = marker_p1;

    drawBoard();

    int player_won = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Este randul jucatorului " << current_player << " (" << current_marker << "). Alege un slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Slot invalid! Incearca din nou.\n";
            i--; 
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "Slotul este deja ocupat! Incearca din nou.\n";
            i--; 
            continue;
        }

        drawBoard();

        // Verificăm dacă cineva a câștigat
        player_won = checkWinner();

        if (player_won == 1) {
            cout << "Jucatorul 1 a castigat!\n";
            break;
        } else if (player_won == 2) {
            cout << "Jucatorul 2 a castigat!\n";
            break;
        }

        swapPlayerAndMarker();
    }

    // Dacă nimeni nu câștigă după toate turele, e egalitate
    if (player_won == 0) {
        cout << "E egalitate!\n";
    }
}

int main() {
    game();
    return 0;
}
