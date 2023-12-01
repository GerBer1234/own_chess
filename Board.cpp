#include "Board.h"
#include "Pawn.h"

Board::Board() {
    initializeBoard();
}

Board::~Board() {
    // A destruktor feladata a dinamikusan allokált objektumok felszabadítása
    // A unique_ptr-ek automatikusan gondoskodnak a felszabadításról
}

void Board::initializeBoard() {
    // Tábla inicializálása és gyalogok hozzáadása
    board.resize(8);

    for (int i = 0; i < 8; ++i) {
        board[i].resize(8);

        // Fehér gyalogok hozzáadása az alsó sorhoz
        board[6][i] = std::make_unique<Pawn>(true, i, 6);

        // Fekete gyalogok hozzáadása a felső sorhoz
        board[1][i] = std::make_unique<Pawn>(false, i, 1);
    }
}

void Board::draw() const {
    // Tábla kirajzolása
    std::cout << "   A   B   C   D   E   F   G   H" << std::endl;

    for (int i = 0; i < 8; ++i) {
        std::cout << i + 1 << " ";
        for (int j = 0; j < 8; ++j) {
            const auto& figure = board[i][j];
            if (!figure) {
                std::cout << "   ";
            } else {
                std::cout << " " << figure->getSymbol() << " ";
            }
        }
        std::cout << " " << i + 1 << std::endl;  // Sor végén kiírjuk az aktuális sor számát
    }

    // Koordináták megjelenítése az alsó sorban
    std::cout << "   A   B   C   D   E   F   G   H" << std::endl;
}
