// Board.cpp
#include "Board.h"
#include <iostream>
#include <iomanip>

Board::Board() {
    initialize();
}

void Board::draw() const {
    // Kirajzoljuk a tábla felső azonositoit
    std::cout << "   ";
    for (char c = 'A'; c <= 'H'; ++c) {
        std::cout << " " << c;
    }
    std::cout << "\n";

    // Kirajzoljuk a tábla sorait és oldalszámokat
    for (int i = 7; i >= 0; --i) {
        std::cout << i + 1 << "  ";
        for (int j = 0; j < 8; ++j) {
            std::cout << " " << board[i][j];
        }
        std::cout << "   " << i + 1 << "\n";
    }

    // Koordináták az alsó részen
    std::cout << "   ";
    for (char c = 'A'; c <= 'H'; ++c) {
        std::cout << " " << c;
    }
    std::cout << "\n";
}

void Board::initialize() {
    // Sakktábla inicializálása
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = '.';
        }
    }
}
