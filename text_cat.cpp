#include <iostream>

int main(void)
{
    std::string str;
    
    while (std::cin >> str) {
    std::cout << "str contains:" << str <<"\n";
    }
    return 0;
}