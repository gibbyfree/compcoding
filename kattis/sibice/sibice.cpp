#include <iostream>

int main() {
  int n, w, h, m;
  std::cin >> n >> w >> h;
  w *= w;
  h *= h;

  for(int i = 0; i < n; i++){
    std::cin >> m;
    m *= m;
    if(m <= h + w){
      std::cout << "DA" << std::endl;
    }
    else{
      std::cout << "NE" << std::endl;
    }
  }
}
