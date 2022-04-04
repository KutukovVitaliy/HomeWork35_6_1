#include <iostream>

int main() {
    int array[]= {1,2,3,4,5};
    for(auto &el : array)  std::cout << el << " " << std::endl;
    return 0;
}
