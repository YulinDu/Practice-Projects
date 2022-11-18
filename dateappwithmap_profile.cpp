#include <iostream>
#include <vector>
#include <string>
#include "dateappwithmap_profile.hpp"
using namespace std;
Profile::Profile(string newname,int newage,string newcity,string newcountry,string newpronouns){
    name=newname;age=newage;city=newcity;country=newcountry;pronouns=newpronouns;
}
string Profile::view_profile(){
    string output;
    output="Name: "+name+"\nAge: "+std::to_string(age)+"\nCity: "+city+"\nCountry: "+country+"\nPronouns: "+pronouns+"\nHobbies:\n";
    for(int i=0;i<hobbies.size();i++){
        output+=hobbies[i]+"\n";
    }
    return output;
}
void Profile::add_hobby(){
    string new_hobby;
    string ans;
    bool another_hobby=true;
    while (another_hobby){
        another_hobby=false;
        cout<<"Enter a hobby you'd like to add:";
        getline(cin,new_hobby);
        hobbies.push_back(new_hobby);
        cout<<"Do you have more hobbies to add? answer in yes/no:";
        getline(cin,ans);
        if(ans=="yes"||ans=="y") another_hobby=true;
    }
}
