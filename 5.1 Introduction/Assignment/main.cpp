#include <iostream>

int main()
{
    int var1{123};
    std::cout << "var 1 : " << var1 << std::endl;

    var1 = 54;
    std::cout << "var 1 : " << var1 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    double var2{33.55};
    std::cout << "var 2 :" << var2 << std::endl;

    var2 = 99.9;
    std::cout << "var 2 :" << var2 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    std::cout << std::endl;
    bool state{false};
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;

    state = true;
    std::cout << "state : " << state << std::endl;

    // Auto type
    auto var3 {333u};

    var3 = -22;

    std::cout << "var3 : " << var3 <<std::endl;

    return 0;
}