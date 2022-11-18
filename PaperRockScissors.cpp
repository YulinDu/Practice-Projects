#include <iostream>
#include <stdlib.h>
int main(){
  //Rock,paper,scissors vs computer
  srand(time(NULL));
  int computer= rand()%3+1;
  int user =0,condition=0;
  std::cout <<"Rock Paper Scissors!\n";
  std::cout <<"1) Rock\n2) Paper\n3) Scissors\nShoot!\n";
  std::cin >>user;
  if (user>0 && user<4){
    if(user==1){
      condition=computer-1;
    }else if(user==2){
      if(computer==1) condition =2;
      if(computer==2) condition =0;
      if(computer==3) condition =1;
    }else if(user==3){
      if(computer==1) condition =1;
      if(computer==2) condition =2;
      if(computer==3) condition =0;
    }
  }else{
    std::cout <<"Invalid input!\n";
  }
  if(condition==0) std::cout <<"It's a draw!\n";
  if(condition==1) std::cout <<"You lose!\n";
  if(condition==2) std::cout <<"You won!\n";
}