#include <iostream>
#include <iomanip>

int main() {
  double cost, lawns, length, width;
  double total = 0;
  std::cin >> cost >> lawns;
  for(int i = 0; i < lawns; i++){
    std::cin >> length >> width;
    total += length * width * cost;
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(8);
  std::cout << total << std::endl;
}
