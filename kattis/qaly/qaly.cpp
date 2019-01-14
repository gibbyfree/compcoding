#include <iostream>

int main() {
  int n;
  double x, y, z;
  std::cin >> n;
  
  for(int i = 0; i < n; i++) {
    std::cin >> x >> y;
    z += x * y;
  }
  std::cout << z << std::endl;
}
