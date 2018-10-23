#include <iostream>

int main() {
  int n, r, e, c, total;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> r >> e >> c;
    total = e - c;
    if(total == r){
      std::cout << "does not matter" << std::endl;
    }
    else if(total < r){
      std::cout << "do not advertise" << std::endl;
    }
    else {
      std::cout << "advertise" << std::endl;
    }
  }
}
