#include <iostream>
#include <vector>
#include <string>
int main(){
  std::string input;
  std::cout<<"Input human words:";
  std::getline(std::cin,input);
  std::vector<char> vowels={'a','e','i','o','u','A','E','I','O','U',',','.','!','?'};
  std::vector<char> result;
  for (int i=0;i<input.size();i++){
    for(int j=0;j<vowels.size();j++){
      if (input[i]==vowels[j]){
        result.push_back(input[i]);
        }
      }
      if(input[i]=='u'||input[i]=='e'||input[i]=='U'||input[i]=='E'){
          result.push_back(input[i]);
    }
  }
  for (int i=0;i<result.size();i++){
    std::cout<<result[i];
  }
  std::cout<<result[result.size()-1]<<"\n";
}