#include <iostream>
#include <vector>
void welcome_statement(){
    std::cout<<"----------\nTicTacToe in C++!\n----------\n";
    std::cout<<"by STDMeow\n";
}
void win_statement(bool turn_status){
    if(!turn_status) std::cout<<"Congratulations! Player X has won!\n";
    if(turn_status) std::cout<<"Congratulations! Player O has won!\n";
}
void display_grid(std::vector<int> grid){
    for(int i=0;i<9;i++){
        if(grid[i]==0){
            std::cout<<"_ ";
        }else if(grid[i]==1){
            std::cout<<"X ";
        }else if(grid[i]==2){
            std::cout<<"O ";
        }
        if((i+1)%3==0){
            std::cout<<"\n";
        }
    }
}
int player_input(){
    int row,column,index;
    std::cout<<"Enter the row you would like to place your mark:";
    std::cin>>row;
    std::cout<<"Enter the column you would like to place your mark:";
    std::cin>>column;
    index=3*(row-1)+column-1;
    return index;
}
bool win_condition(std::vector<int> grid){
    if(grid[0]==grid[1]&&grid[1]==grid[2]&&grid[2]!=0) return true;
    if(grid[3]==grid[4]&&grid[4]==grid[5]&&grid[5]!=0) return true;
    if(grid[6]==grid[7]&&grid[7]==grid[8]&&grid[8]!=0) return true;
    if(grid[0]==grid[3]&&grid[3]==grid[6]&&grid[6]!=0) return true;
    if(grid[1]==grid[4]&&grid[4]==grid[7]&&grid[7]!=0) return true;
    if(grid[2]==grid[5]&&grid[5]==grid[8]&&grid[8]!=0) return true;
    if(grid[0]==grid[4]&&grid[4]==grid[8]&&grid[8]!=0) return true;
    if(grid[2]==grid[4]&&grid[4]==grid[6]&&grid[6]!=0) return true;
    return false;
}