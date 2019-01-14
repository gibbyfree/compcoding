#include <iostream>


int main() {

  int factorials [10] = {1, 2, 6, 4, 0, 0, 0, 0, 0, 0};

  int n, x;
  std::cin >> n;

  for(int i = 0; i < n; i++) {
    std::cin >> x;
    int result = factorials[x - 1];

    std::cout << result << std::endl;
  }

}
