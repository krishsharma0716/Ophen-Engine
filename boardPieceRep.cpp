//
// Created by Krish Sharma on 1/14/25.
//This file sets up the board and pieces using bitsets
#include "boardPieceRep.h"
#include <iostream>
#include <bitset>
using namespace std;

//board
std::bitset<64> board("1111111111111111000000000000000000000000000000001111111111111111");

//pieces
std::bitset<64> bPawns("0000000011111111000000000000000000000000000000000000000000000000");
std::bitset<64> bRooks("1000000100000000000000000000000000000000000000000000000000000000");
std::bitset<64> bKnights("0100001000000000000000000000000000000000000000000000000000000000");
std::bitset<64> bBishops("0010010000000000000000000000000000000000000000000000000000000000");
std::bitset<64> bQueen("0001000000000000000000000000000000000000000000000000000000000000");
std::bitset<64> bKing("0000100000000000000000000000000000000000000000000000000000000000");
std::bitset<64> wPawns("0000000000000000000000000000000000000000000000001111111100000000");
std::bitset<64> wRooks("0000000000000000000000000000000000000000000000000000000100000001");
std::bitset<64> wKnights("0000000000000000000000000000000000000000000000000000000010000010");
std::bitset<64> wBishops("0000000000000000000000000000000000000000000000000000000000100100");
std::bitset<64> wQueen("0000000000000000000000000000000000000000000000000000000000001000");
std::bitset<64> wKing("0000000000000000000000000000000000000000000000000000000000010000");

std::bitset<64> arr[13] = {wPawns, wRooks, wKnights, wBishops, wQueen, wKing, bPawns, bRooks, bKnights, bBishops, bQueen, bKing, board};
string narr[13] = {"wPawns", "wRooks", "wKnights", "wBishops", "wQueen", "wKing", "bPawn", "bRook", "bKnight", "bBishop", "bQueen", "bKing", "board"};
    //  void boardPieceRep::setBoard(){
    //     //Setting up the board
    //     //Setting the 1,0: 1 being a piece, 0 being empty square
    //     for(int n = 0; n < 2; ++n) {
    //         for(int i = 0; i < 16; i++){
    //             board.flip(i+(n*48));
    //         }
    //     }
    //      setPawn();
    //      setRooks();
    //      setKnights();
    //      setBishops();
    //      setQueens();
    //      setKings();
    // }

bitset<64> boardPieceRep::getPiece(string piece){
         int loc = 0;
         int count = 0;
         for(string str : narr) {
             if (str == piece) {
                 loc = count;
                 break;
             }
             count++;
         }
         return arr[loc];
     }

void boardPieceRep::printBoard(bitset<64> b1) {
         if (b1 == board) {
             for (int i = 0; i < 64; i++) {
                 if(i % 8 == 0) {
                     std::cout << std::endl;
                 }
                 for (int n = 0; n < 12; n++) {
                     if (!board.test(i)) {
                         std::cout << "empty, ";
                         break;
                     }
                     if(board.test(i) && arr[n].test(i)) {
                         std::cout << narr[n] << ", ";
                         break;
                     }

                 }
             }
         }
         else {
             int count = 0;
             string name = "";
             bitset<64> temp = board &= b1;
             for (bitset<64> a : arr) {
                 if (a == b1) {
                     name = narr[count];
                     break;
                 }
                 count++;
             }
             for (int i = 0; i < 64; i++) {
                 if (i % 8 ==0) {
                     cout << endl;
                 }
                 if(temp.test(i) == 0) {
                     cout << "empty, ";
                 }
                 else {
                     cout << name << ", ";
                 }
             }
         }
     }

//      void boardPieceRep::setPawn(){
//         for(int i = 0; i < 8; i++) {
//             wPawns.flip(48+i);
//             bPawns.flip(8+i);
//         }
//     }
//
//     void boardPieceRep::setRooks() {
//          wRooks.flip(55);
//          wRooks.flip(63);
//          bRooks.flip(0);
//          bRooks.flip(7);
//      }
//
//     void boardPieceRep::setKnights() {
//          wKnights.flip(56);
//          wKnights.flip(62);
//          bKnights.flip(1);
//          bKnights.flip(6);
//      }
//
// void boardPieceRep::setBishops() {
//          wBishops.flip(57);
//          wBishops.flip(61);
//          bBishops.flip(2);
//          bBishops.flip(5);
//      }
// void boardPieceRep::setQueens() {
//          wQueen.flip(58);
//          bQueen.flip(3);
//      }
// void boardPieceRep::setKings() {
//          wKing.flip(59);
//          bKing.flip(4);
//      }







