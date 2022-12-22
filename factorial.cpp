#include <iostream>
#include <string>
#include <math.h>


using std::string, std::cin, std::cout;

int getAll_factorial(int factor)
{
    int counter{0};
    for (int i = 1; i<factor/2+1; i++){
        if (factor%i == 0){
            counter++;
        }
    }
    return counter;
}


bool compare_f(int num1, int num2, bool isReversed)
{
    if (!isReversed){
        int factor{getAll_factorial(num1)};
        int factor2{getAll_factorial(num2)};
        
        return factor2<factor;
    }
    return num2<num1;
}

int getNum()
{
    cout <<"Enter a number: ";
    
    int num{};
    cin >>num;
    
    return num;
}

bool quit()
{
    cout <<"Exit (enter y/n): ";
    
    char is_exit{};
    cin >>is_exit;
    
    return int(is_exit) == 121;
}

int main()
{
    while (true){
        int num{getNum()};
        int num2{getNum()};
        
        if (compare_f(num, num2, false)){
            cout <<"Factors of "<<num<<" are more\n-----\n";
        }else{
            cout <<"Factors of "<<num<<" are less\n-----\n";
        }
        if (quit()){
            break;
        }
        cout <<"\n------------\n";
    }
    cout <<">>>";
    return 0;
}
