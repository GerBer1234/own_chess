#ifndef VALAMI2_BOARD_H
#define VALAMI2_BOARD_H

#include <iostream>
#include <vector>
#include <memory>
#include "Figure.h"

class Board {
public:
    Board();
    ~Board();

    void draw() const;

private:
    std::vector<std::vector<std::unique_ptr<Figure>>> board;
    void initializeBoard();
};

#endif //VALAMI2_BOARD_H
