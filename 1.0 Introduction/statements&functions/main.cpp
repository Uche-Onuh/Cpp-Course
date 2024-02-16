#include <iostream>

int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int mutiplyNumbers(int firstParam, int secondParam){
    int result = firstParam * secondParam;
    return result;
}

int main(){
   int firstNumber {13};
   int secondNumber {7};

   std::cout << "First number : " << firstNumber << std::endl; 
   std::cout << "Second number : " << secondNumber << std::endl; 

   int sum = firstNumber + secondNumber;
   std::cout << "Sum : " << sum << std::endl;

   sum = addNumbers(25, 7);
   std::cout << "Sum : " << sum << std::endl;
   

   int multiple = mutiplyNumbers(10, 20);
   std::cout << "Multiple : " << multiple << std::endl;

   return 0;
}