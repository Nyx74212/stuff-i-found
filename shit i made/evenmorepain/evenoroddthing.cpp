#include <iostream>

int main()
{
    while(!std::cin.eof())
    {
        int evenOrOdd{};
        std::cin>>evenOrOdd;
        if(evenOrOdd%2==0) std::cout<<"Even\n";
        else std::cout<<"Odd\n";
    }
}