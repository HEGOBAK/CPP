#include <iostream>
#include <cmath>

std::string toBinary(int n) {
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n%2 == 0) return toBinary(n/2) + "0";
    else if (n%2 != 0) return toBinary(n/2) + "1";
}

int main()
{
    std::cout << "1)  " << toBinary(10 << 8) << std::endl;
    std::cout << "2)  " << toBinary((10 << 8) >> 8) << std::endl;
    std::cout << "3)  " << (std::roundf(42.42f * (1 << 8))) << std::endl; 
    // 42.42 * 2^8 = 10875.52 becuz int, truncate 0.52 = 10875, 
    //  this will result when turning back into floating, it will only show  
    //  42 not 42.42.
    std::cout << "4)  " << (std::roundf(std::roundf(42.42f * (1 << 8)) / (1 << 8))) << std::endl; 
    std::cout << "5)  " << toBinary(std::roundf(42.42f * (1 << 8))) << std::endl; 
    std::cout << "6)  " << toBinary(std::roundf(std::roundf(42.42f * (1 << 8)) / (1 << 8))) << std::endl; 
    std::cout << "7)  " << (int(std::roundf(42.42f * (1 << 8))) >> 8) << std::endl; 
    return (0);
}

// 1 << 8 = 1 + 8 zeros 1.00000000 1.0
// 2 << 8 = 10 + 8 zeros 10.00000000 2.0
// 10 << 8 =  1010 + 8 zeros 1010.00000000 = 10.0

// 42.42f * (1<<8) = int : 10860 | binary : 01010 01101100 = 42.4238......
// 42 in binary = 101010