#ifndef VALAMI2_PAWN_H
#define VALAMI2_PAWN_H

#include "Figure.h"

#include "Figure.h"

class Pawn : public Figure {
public:
    Pawn(bool isWhite, int x, int y);

    char getSymbol() const override;
    bool isValidMove(int x, int y) const;
    bool isValidCapture(int x, int y) const;

private:
    bool isWhite;
    int x;
    int y;
};


#endif //VALAMI2_PAWN_H
