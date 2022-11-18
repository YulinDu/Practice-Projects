#include <iostream>
#include <string>
#include "bleep.hpp"
int main(){
    using namespace std;
    string word="broccoli",text="I think I'm not eating fastfood today, maybe something healthy like broccoli.But broccoli really taste bad, I don't like broccoli";
    //"I think I'm not eating fastfood today, maybe something healthy like broccoli"
    bleep_the_text(text,word);
    cout<<text;
}