#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "error\n";
        return 0;
    }
    std::string_view el1{argv[1]};

    std::string str;
    while (std::getline(std::cin, str)) {
        auto iter{str.begin()};
        while (iter != str.end()) {
            if (el1.find(*iter) != std::string::npos) {
            } else {
                std::cout << (*iter);
            }
            iter++;
        }
        std::cout << std::endl;
    }
    return 0;
}
