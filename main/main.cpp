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


    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int index =  left + (right - left) / 2;
        if (nums[index] == target) {
            std::cout << "target at index " << index << std::endl;
            break;
        } else if (nums[index] > target) {
            right = index - 1;
        } else {
            left = index + 1;
        }
    }

    
    return 0;
}