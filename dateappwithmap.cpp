#include <iostream>
#include <map>
#include "dateappwithmap_profile.hpp"
using namespace std;
string user_input(string input_name){
    string input;
    cout<< "Enter your "+input_name+" : ";
    getline(cin,input);
    return input;
}
int main(){
    map<string,Profile> user;
    string username;
    username=user_input("username");
    user[username]=Profile(user_input("full name"),stoi(user_input("age")),user_input("city of living"),
    user_input("country of living"),user_input("preference of pronouns"));
    user[username].add_hobby();
    cout<<"Username: "+username+"\n"<<user[username].view_profile();
    return 0;
}