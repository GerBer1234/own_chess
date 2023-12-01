#ifndef VALAMI2_FIGURE_H
#define VALAMI2_FIGURE_H


#include <utility>

class Figure {
public:
    Figure(bool isWhite, char symbol, int x, int y);
    virtual ~Figure() = default;

    char getSymbol() const;
    bool isWhite() const;
    std::pair<int, int> getPosition() const;

    virtual bool isValidMove(int x, int y) const;  // Ellenőrzi, hogy az adott lépés érvényes-e
    virtual bool move(int x, int y);               // Végrehajtja a lépést

    virtual bool isValidCapture(int x, int y) const;  // Ellenőrzi, hogy az adott ütés érvényes-e
    virtual bool capture(int x, int y);               // Végrehajtja az ütést

    bool hasMoved() const;  // Ellenőrzi, hogy a figura már lépett-e

protected:
    void setPosition(int x, int y);  // Beállítja a figura pozícióját

private:
    bool isWhite_;
    char symbol_;
    std::pair<int, int> position_;
    bool hasMoved_;
};


#endif //VALAMI2_FIGURE_H
