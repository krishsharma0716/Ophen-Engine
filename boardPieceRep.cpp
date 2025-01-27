//
// Created by Krish Sharma on 1/14/25.
//This file sets up the board and pieces using bitsets
#include "boardPieceRep.h"
#include <iostream>
#include <bitset>

//board
std::bitset<64> board[64];

//pieces
std::bitset<64> wPawns[64];
std::bitset<64> wRooks[64];
std::bitset<64> wKnights[64];
std::bitset<64> wBishops[64];
std::bitset<64> wQueen[64];
std::bitset<64> wKing[64];
std::bitset<64> bPawns[64];
std::bitset<64> bRooks[64];
std::bitset<64> bKnights[64];
std::bitset<64> bBishops[64];
std::bitset<64> bQueen[64];
std::bitset<64> bKing[64];

int boardPieceRep() {

//Setting up the board
    //Setting the 1,0: 1 being a piece, 0 being empty square
    for(int n = 0; n < 2; ++n) {
        for(int i = 0; i < 16; i++){
            board->flip(i+(n*48));
        }
    }
    //printing the board
    for(int i = 0; i < 64; ++i) {
        if(i % 8 == 0) {
            std::cout << std::endl;
        }
    std::cout << board->test(i);
    }

}

