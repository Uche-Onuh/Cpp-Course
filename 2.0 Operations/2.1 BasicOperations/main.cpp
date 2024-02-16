#include <iostream>

int main()
{
    // Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;

    // subtraction
    result = number2 - number1;
    std::cout << "result : " << result << std::endl;

    result = number1 - number2;
    std::cout << "result : " << result << std::endl;

    // multiplication
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;

    // division
    result = number2 / number1;
    std::cout << "result : " << result << std::endl;

    // modulus
    result = number2 % number1;
    std::cout << "result : " << result << std::endl;

    return 0;
}