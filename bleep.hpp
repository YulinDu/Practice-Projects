#include <iostream>
#include <string>
using namespace std;
void bleep_the_text(string &input,string const keyword){
    for(int i=0;i<(input.size()-keyword.size()+1);i++){
        bool is_keyword=true;
        for(int j=0;j<keyword.size();j++){
            if(keyword[j]!=input[i+j]){
                is_keyword=false;
                break;
            } 
        }
        if(is_keyword){
            for(int j=0;j<keyword.size();j++){
                input[i+j]='*';
            }
        }
    }
}
