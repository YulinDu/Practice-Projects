#include <iostream>
#include <vector>
int main(){
  std::vector<int> input={2,4,3,6,1,9};
  int sum=0,product=1;
  for(int i=0; i< input.size();i++){
    if (input[i]%2==0){
      sum=sum+input[i];
    }else if(input[i]%2==1){
      product=product*input[i];
    }else{
      std::cout<<"None interger at "<<i<<"th element of the input\n";
    }
  }
  std::cout<<"The sum of even numbers is "<<sum<<"\n";
  std::cout<<"The product of odd numbers is "<<product<<"\n";
}