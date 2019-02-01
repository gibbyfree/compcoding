#include <iostream>

int main() {
  int g, s, c, t;
  std::cin >> g >> s >> c;
  t = g * 3 + s * 2 + c;

  if(t >= 8) {
    std::cout << "Province or ";
  }
  else if(t >= 5) {
    std::cout << "Duchy or ";
  }
  else if (t >= 2) {
    std::cout << "Estate or ";
  }

  if(t >= 6) {
    std::cout << "Gold";
  }
  else if(t >= 3) {
    std::cout << "Silver";
  }
  else {
    std::cout << "Copper";
  }
}
