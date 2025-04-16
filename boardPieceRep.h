//
// Created by Krish Sharma on 1/14/25.
//

#ifndef BOARDPIECEREP_H
#define BOARDPIECEREP_H
#include <bitset>
using namespace std;

class boardPieceRep {
    public:
        // static void setBoard();
        static void printBoard(std::bitset<64> b1);
        static bitset<64> getPiece(string piece);
        // static void setPawn();
        // static void setRooks();
        // static void setKnights();
        // static void setBishops();
        // static void setKings();
        // static void setQueens();


};



#endif //BOARDPIECEREP_H
