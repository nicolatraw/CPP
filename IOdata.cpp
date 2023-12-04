#include <iostream>
#include <string>

int main() {
    // in
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    // out
    std::cout << "Hi, " << name << "!" << std::endl;

    return 0;
}
