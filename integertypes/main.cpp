#include <iostream>

int main()
{
    /*
    // ramdom numbers
    int elephant_count;

// init zero
    int lion_count{};

// init 10
    int dog_count {10};

// init 15
    int cat_count {15};

// can use expression
    int domesticated_animals {dog_count + cat_count};

    // int new_number{doesnt_exist};

    // int narrowing_conversion {2.9};

    std::cout << "Elepant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domestic animal count : " << domesticated_animals << std::endl;
*/

    // functional Initialization
    /*
        int apple_count(5);
        int orange_count(15);
        int fruit_count (apple_count + orange_count);

        // info lost
        int narrowing_conversion_functional(2.9);

        std::cout << "apple count : " << apple_count << std::endl;
        std::cout << "orange count : " << orange_count << std::endl;
        std::cout << "fruit count : " << fruit_count << std::endl;
        std::cout << "narrowed count : " << narrowing_conversion_functional << std::endl;
    */

    // Assignment
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_functional = 2.9;

    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count : " << truck_count << std::endl;
    std::cout << "Vehicle count : " << vehicle_count << std::endl;
    std::cout << "Narrowing count : " << narrowing_conversion_functional << std::endl;

    // check size
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}