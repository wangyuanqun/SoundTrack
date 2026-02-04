#include <iostream>
#include <vector>
int main() {
    std::string name;
    std::cout << "Hello what is ur name ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;

    std::vector<std::string> names = {"rex", "max", "lucy"};
    for (const std::string& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    return 0;
}