#include <iostream>

int main()
{
    for(char i='A'; i<='z'; std::cout<<i++)
    {
        if(i=='[')i='a';
    }
}