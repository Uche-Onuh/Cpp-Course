#include <iostream>

int main()
{
    signed int value1{10};
    signed int value2{-300};

    std::cout << "value 1 : " << value1 << std::endl;
    std::cout << "value 2 : " << value2 << std::endl;
    std::cout << "size of value 1 : " << sizeof(value1) << std::endl;
    std::cout << "size of value 2 : " << sizeof(value2) << std::endl;

    unsigned int value3{4};
    // compiler error
    unsigned int value3{-4};

    // short and long
    short short_var{-32768};
    short int short_int{344};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    int int_var{55};
    signed signed_var{65};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{88};
    unsigned long int unsigned_long_int{88};

    long long long_long{888};
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    

    return 0;
}