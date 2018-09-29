#include <iostream>

int main() {
  int n;
  int output = 1;
  std::cin >> n;
  for(int i = 0; i < n; i++){
    output *= 2;
  }

  std::cout << (output + 1) * (output + 1) << std::endl;
}
