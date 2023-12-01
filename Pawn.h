#ifndef VALAMI2_PAWN_H
#define VALAMI2_PAWN_H

#include "Figure.h"

class Pawn : public Figure {
public:
    Pawn(bool isWhite, int x, int y);

    virtual ~Pawn() override = default;

    virtual bool isValidMove(int x, int y) const override;

    virtual bool isValidCapture(int x, int y) const override;
};

#endif //VALAMI2_PAWN_H
