#include <iostream>

int main() {
  int n, ab;
  double cum = 0.0;
  int ctr = 0;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> ab;
    if(ab == -1){
      ctr++;
      continue;
    }
    else {
      cum += ab;
    }
  }
  n -= ctr;
  std::cout << cum / n << std::endl;
}
