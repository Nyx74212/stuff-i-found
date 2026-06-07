#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>

using boost::multiprecision::cpp_dec_float_100;
int main()
{
   std::cout.precision(101);
    while(!std::cin.eof())
    {
        cpp_dec_float_100 factorial{};
        std::cin>>factorial;
        std::cout<<tgamma(factorial+1)<<"\n";
    }
}   