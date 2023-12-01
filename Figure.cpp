#include "Figure.h"

Figure::Figure(bool isWhite, char symbol, int x, int y)
        : isWhite_(isWhite), symbol_(symbol), position_(x, y), hasMoved_(false) {}

char Figure::getSymbol() const {
    return symbol_;
}

bool Figure::isWhite() const {
    return isWhite_;
}

std::pair<int, int> Figure::getPosition() const {
    return position_;
}

bool Figure::isValidMove(int x, int y) const {
    // Ellenőrzi, hogy az adott lépés érvényes-e
    // Implementáció a leszármazott osztályokban
    return false;
}

bool Figure::move(int x, int y) {
    // Végrehajtja a lépést, ha az érvényes
    if (isValidMove(x, y)) {
        setPosition(x, y);
        hasMoved_ = true;
        return true;
    }
    return false;
}

bool Figure::isValidCapture(int x, int y) const {
    // Ellenőrzi, hogy az adott ütés érvényes-e
    // Implementáció a leszármazott osztályokban
    return false;
}

bool Figure::capture(int x, int y) {
    // Végrehajtja az ütést, ha az érvényes
    if (isValidCapture(x, y)) {
        setPosition(x, y);
        hasMoved_ = true;
        return true;
    }
    return false;
}

bool Figure::hasMoved() const {
    return hasMoved_;
}

void Figure::setPosition(int x, int y) {
    position_.first = x;
    position_.second = y;
}