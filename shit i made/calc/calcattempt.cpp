#include <iostream>
#include <string>
#include <cmath>
int main()
{
    while (true)
    {
        std::string numberAsString;
        std::cout<< "alcculatro! entree s operandre plasagna (enter q to make calc chit itself)\n--> ";
        char operation{};
        std::cin>>operation;
        if (operation == 'q') return 0;
        std::cout<<"mnunber plasagna\n--> ";
        std::cin>> numberAsString;
        long double number = std::stold(numberAsString);
        std::cout<<"scaesxnd mnunber plasagna\n--> ";
        std::cin>> numberAsString;
        if (operation =='+') std::cout<<number+std::stold(numberAsString)<<"\n";
        if (operation =='-') std::cout<<number-std::stold(numberAsString)<<"\n";
        if (operation =='*') std::cout<<number*std::stold(numberAsString)<<"\n";
        if (operation =='/') std::cout<<number/std::stold(numberAsString)<<"\n";
        if (operation =='%') std::cout<<std::fmod(number,std::stold(numberAsString))<<"\n";
    }
}


//plasagna = please 
//mnunber = number