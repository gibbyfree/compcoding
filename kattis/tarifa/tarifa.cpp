#include <iostream>

int main() {
  int data, months;
  std::cin >> data >> months;
  int total = 0;

  for(int i = 0; i < months; i++){
    total += data;
    int p;
    std::cin >> p;
    total -= p;
  }

  std::cout << total + data << std::endl;

}
