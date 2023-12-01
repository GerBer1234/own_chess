#include "Pawn.h"
#include <cmath>  // Az abs függvény használatához

Pawn::Pawn(bool isWhite, int x, int y)
        : Figure(isWhite, isWhite ? 'P' : 'p', x, y) {}

char Pawn::getSymbol() const {
    // Implementáld a megfelelő szimbólumot a fehér és fekete bábuk esetére
    return isWhite ? 'P' : 'p';
}


bool Pawn::isValidMove(int x, int y) const {
    int currentX = getPosition().first;
    int currentY = getPosition().second;

    // A kiinduló pozícióból lehet 1 vagy 2 mezőt előre lépni
    if (!hasMoved() && currentX == x && (y - currentY == 1 || y - currentY == 2)) {
        return true;
    }

    // Lépésenként csak egy mezőt haladhat előre
    return !hasMoved() && currentX == x && y - currentY == 1;
}

bool Pawn::isValidCapture(int x, int y) const {
    int currentX = getPosition().first;
    int currentY = getPosition().second;

    // Csak egy mezőnyi távolságra üthet balra vagy jobbra átlósan
    return std::abs(currentX - x) == 1 && y - currentY == 1;
}
