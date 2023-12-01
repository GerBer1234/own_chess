#ifndef VALAMI2_BOARD_H
#define VALAMI2_BOARD_H


class Board {
        public:
        Board();  // Konstruktor

        void draw() const;  // Tábla kirajzolása

        private:
        char board[8][8];  // Sakktábla mezői

        void initialize();  // Tábla inicializálása
};

#endif //VALAMI2_BOARD_H
