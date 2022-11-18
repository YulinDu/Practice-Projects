#include <iostream>
#include <vector>
#include "ttt.hpp"
int main(){
    bool turn_status=true;// turn_status=false for X player, true for O player
    std::vector<int> grid(9);//gird=0 for initial state, 1 for X player, 2 for O player
    welcome_statement();
    while(!win_condition(grid)){
        turn_status=!turn_status;
        display_grid(grid);
        if(!turn_status) std::cout<<"Turn for Player X\n";
        if(turn_status) std::cout<<"Turn for Player O\n";
        grid[player_input()]=1+turn_status;
    }
    display_grid(grid);
    win_statement(turn_status);
    return 0;
}