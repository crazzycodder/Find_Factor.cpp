// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>

using std::cout, std::cin, std::string;

string getUser_info(string info)
{
    cout <<info;
    
    string in_info{};
    cin >>in_info;
    
    return in_info;
}
string check(string sex)
{
    if (sex == "male"|| sex == "m"){
        return "him";
    }else if (sex == "female"|| sex == "f"){
        return "her";
    }
    return sex;
}

int get_age(string recipient)
{
    cout <<"\nEnter age of "<<recipient<<": ";
    
    int age{};
    cin >>age;
    
    return age;
}
void end_statement(int age)
{
    if (age <=12 && age >1){
        cout <<"You will be "<<age+1<<". Congrats.";
    }else if (age ==17){
        cout <<"Next year you will be able to vote, congrats.";
    }else if (age >=70 && age <110){
        cout <<"I hope you are enjoying retirement.";
    }else{
        cout <<"All the best to you and congrats.";
    }
}

void converse()
{
    string f_name{getUser_info("Enter first name: ")};
    string best_friend{getUser_info("Enter the name of best friend: ")};
    
    cout <<"\n----------\nFrom: "<<f_name<<"\nTo: "<<best_friend<<"\n";
    string other_friend{getUser_info("\nEnter other friend: ")};
    
    cout <<"\n----\nHow are you? All is fine and well with me. Anyways have you seen "<<other_friend<<" lately";
    
    string sex_Ofriend{getUser_info("\nEnter other friend sex: ")};
    cout <<"\n----\nI havent seen ";
    
    string sex_valid{check(sex_Ofriend)};
    cout <<sex_valid;
    cout <<" in such a while. if you see "<<sex_valid;
    cout <<" ,tell "<<sex_valid<<" to call me.";

    int bestie_age{get_age("best friend")};
    
    string isKidding{""};
    if (bestie_age >= 110 || bestie_age<=1){
        string isKidding{", You're kidding!"};
    }
    cout<<"\n--------\nI heard you recently had a birthday and you're "<<bestie_age<<isKidding<<"\n";
    
    end_statement(bestie_age);
}

int main()
{
    converse();
    return 0;
}
