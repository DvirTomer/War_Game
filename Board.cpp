#include "Board.hpp"
#include <iostream>
#include <limits>
#include <math.h>
using namespace std;

namespace WarGame {


         Soldier*& Board :: operator[](std::pair<int,int> location){
             return board[location.first][location.second];
        }


        Soldier* Board:: operator[](std::pair<int,int> location) const{
            return  board[location.first][location.second];
        }

        void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction) {
        }




         bool Board::has_soldiers(uint nop) const {
            int count=0;
             for(int i=0; i<board.size();i++){
                 for(int j=0; j<board[i].size();j++){
                     Soldier* sol= board[i][j];
                     if(sol!=nullptr && sol->nop==nop){
                        return true;
                     }
                 }
             }
             return false;
         }


        // Soldier* Board:: checkClose(std::pair<int,int> source , uint player_number){
        //     int min_dis=std::numeric_limits<int>::max();
        //     Soldier *s = nullptr;
        //     for(int i=0;i<board.size();i++){
        //         for(int j=0;j<board[0].size();j++){
        //             if(board[i][j]!=nullptr && i!=source.first && j!=source.second ){
        //                 if(board[i][j]->num_player==player_number){
        //                     int temp=sqrt(pow(i-source.first,2)+pow(j-source.second,2)); //distance
        //                     if(temp<min_dis){
        //                         min_dis=temp;
        //                         s=board[i][j];
        //                     }
        //                 }
        //             }    

        //         }
        //     }
        // return s;

        // }
}