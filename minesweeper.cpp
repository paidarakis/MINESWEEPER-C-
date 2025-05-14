// Topothetei tuxaia tis narkes, ektos tou prwtou click kai girw perioxis
void plnarkes(int firstClickR, int firstClickC) {
    srand(time(0));
    int placed = 0;
    while(placed < narkescount){
        int r = rand() % seires;
        int c = rand() % stiles;
        if (!narkes[r][c] && !(abs(r - firstClickR) <= 1 && abs(c - firstClickC) <= 1)) {
            narkes[r][c] = true;
            ++placed;
        }
    }
}

// Emfanizei ton pinaka tou paixnidiou
void printBoard(bool revealAll = false) {
    cout << "   ";
    for(int c = 0; c < stiles; ++c) cout << c << ' ';
    cout << '\n';

    for (int r = 0; r < seires; ++r) {
        cout << r << " |";
        for (int c = 0; c < stiles; ++c) {
            if (revealAll && narkes[r][c])
                cout << '*';              // Emfanisi narks
            else if (flagged[r][c])
                cout << 'F';              // Simaia
            else if (revealed[r][c])
                cout << board[r][c];      // Periexomeno keliou
            else
                cout << '-';              // Kleisto keli
            cout << ' ';
        }
        cout << '\n';
    }
    cout << "\nNarkes pou apokalypthkan: " << apnarkes << "  Kelia me shmaia: " << kelsim << "  Ypoleipomenes narkes: " << ypnarkes << '\n';
}

// Elegxei an exei kerdisei o paiktis
bool isWin() {
    int revealedNonMines = 0;
    for(int r=0;r<seires;++r) {
        for (int c=0;c<stiles;++c) {
            if (revealed[r][c] && !narkes[r][c]) {
                ++revealedNonMines;
            }
        }
    }
    return revealedNonMines == seires * stiles - narkescount;
}

// Epanaferei tin katastasi tou paixnidiou
void resetGame() {
    for (int r=0;r<seires;++r){
        for (int c=0;c<stiles;++c) {
            board[r][c] = '-';
            revealed[r][c] = false;
            narkes[r][c] = false;
            flagged[r][c] = false;
        }
    }

    apnarkes = 0;
    kelsim = 0;
    ypnarkes = narkescount;
    firstClick = true;
}