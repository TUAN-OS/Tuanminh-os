#include <iostream>
using namespace std;

int main () {
    char command = 'null'
    std::cout << "Welcome to Tuanminh-OS v1.00 Command Console" << std::endl;
    std::cout << "It not a graphics OS, but it is mission and a basis of others version of Tuanminh-OS" << std::endl;
    std::cin >> command;
    if (command == help) {
        std::cout << "Help 'commands'";
    }
    return 0
}