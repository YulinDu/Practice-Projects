#include <iostream>
#include <vector>
class Profile{
    std::vector<std::string> hobbies;
    public:
        std::string name;
        int age;
        std::string city;
        std::string country;
        std::string pronouns="they/them";
        Profile(){}//default constructor required by map datatype
        Profile(std::string newname,int newage,std::string newcity,std::string newcountry,std::string newpronouns);
        std::string view_profile();
        void add_hobby();
};