//
// Created by Krish Sharma on 1/14/25.
//This file sets up the board and pieces using bitsets
#include "boardPieceRep.h"
#include <iostream>
#include <bitset>
using namespace std;

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

//bitset arr[12] = {wPawns, wRooks, wKnights, wBishops, wQueen, wKing, bPawns, bRooks, bKnights, bBishops, bQueen, bKing};
//string narr[12] = {"wPawn", "wRook", "wKnights", "wBishops", "wQueen", "wKing", "bPawn", "bRook", "bKnight", "bBishop", "bQueen", "bKing"};
     void boardPieceRep::setBoard(){
        //Setting up the board
        //Setting the 1,0: 1 being a piece, 0 being empty square
        for(int n = 0; n < 2; ++n) {
            for(int i = 0; i < 16; i++){
                board->flip(i+(n*48));
            }
        }
         setPawn();
         setRooks();
         setKnights();
         setBishops();
         setQueens();
         setKings();
    }


     void boardPieceRep::printBoard() {
        //printing the board
        for(int i = 0; i < 64; ++i) {
            if(i % 8 == 0) {
                std::cout << std::endl;
            }
            std::cout << board->test(i);
        }

         // for (int i = 0; i < 64; i++) {
         //     if(i % 8 == 0) {
         //         std::cout << std::endl;
         //     }
         //     for (int n = 0; n < 12; n++) {
         //        if(board->test(i) & arr[n]->test(i)) {
         //            std::cout << narr[n] << ", ";
         //        }
         //     }
         // }
    }

     void boardPieceRep::setPawn(){
        for(int i = 0; i < 8; i++) {
            wPawns->flip(48+i);
            bPawns->flip(8+i);
        }
    }

    void boardPieceRep::setRooks() {
         wRooks->flip(55);
         wRooks->flip(63);
         bRooks->flip(0);
         bRooks->flip(7);
     }

    void boardPieceRep::setKnights() {
         wKnights->flip(56);
         wKnights->flip(62);
         bKnights->flip(1);
         bKnights->flip(6);
     }

void boardPieceRep::setBishops() {
         wBishops->flip(57);
         wBishops->flip(61);
         bBishops->flip(2);
         bBishops->flip(5);
     }
void boardPieceRep::setQueens() {
         wQueen->flip(58);
         bQueen->flip(3);
     }
void boardPieceRep::setKings() {
         wKing->flip(59);
         bKing->flip(4);
     }






