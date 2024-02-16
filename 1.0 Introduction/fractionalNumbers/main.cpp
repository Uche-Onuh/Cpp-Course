#include <iostream>
#include <iomanip>

int main()
{
    float number1{1.12345533773804568903F};
    double number2{1.12345533773804568903};
    long double number3{1.12345533773804568903L};

    // print size
    std::cout << "size of float : " << sizeof(float) << std::endl;
    std::cout << "size of double : " << sizeof(double) << std::endl;
    std::cout << "size of long double : " << sizeof(long double) << std::endl;

    // precision
    std::cout << std::setprecision(20);
    std::cout << "Number 1 is : " << number1 << std::endl;
    std::cout << "Number 2 is : " << number2 << std::endl;
    std::cout << "Number 3 is : " << number3 << std::endl;

    // Float problem : Precision is too limited

    float number4 = 192400023.0f;

    std::cout << "number 4 : " << number4 << std::endl;

    // Scientific notation

    std::cout << "--------------------" << std::endl;

    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8};

    double number8{0.00000000003498};
    double number9{3.498e-11};

    std::cout << "number 5 : " << number5 << std::endl;
    std::cout << "number 6 : " << number6 << std::endl;
    std::cout << "number 7 : " << number7 << std::endl;
    std::cout << "number 8 : " << number8 << std::endl;
    std::cout << "number 8 : " << number9 << std::endl;

    // infinity and NAN
    std::cout << std::endl;
    std::cout << "infinity and NAN" << std::endl;

    double number10{5.6};
    double number11{};
    double number12{};

    // infinity
    double result{number10 / number11};

    std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
    std::cout << result << "+" << number10 << " yields " << result + number10 << std::endl;

    // NAN

    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0;
}