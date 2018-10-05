#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n = 0;
  std::vector<int> v;

  for(int i = 0; i < 10; i++){
    std::cin >> n;
    n = n % 42;
    if(!(std::find(v.begin(), v.end(), n) != v.end())){
      v.push_back(n);
    }
  }

  std::cout << v.size() << std::endl;
}
