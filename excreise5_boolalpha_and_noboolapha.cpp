#include <sstream>
#include <iostream>


int main()
{
    // boolalpha output
    std::cout << std::boolalpha 
              << "boolalpha true: " << true << '\n'
              << "boolalpha false: " << false << '\n';
    std::cout << std::noboola5lpha 
              << "noboolalpha true: " << true << '\n'
              << "noboolalpha false: " << false << '\n';
    // boolalpha parse
    bool b1;
    bool b2;
    // std::cout << std::boolalpha << b1 << b2 << b3;
    std::istringstream is("flase flase");//the b1 and b2 boolean depend on istringstream content
    is >> std::boolalpha >> b1 >> b2;
    std::cout << '\"' << is.str() << "\" parsed as " << b1 << ' ' << b2 << '\n';
}