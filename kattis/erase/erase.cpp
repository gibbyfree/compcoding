#include <iostream>
#include <string>

int main() {
  int n; 
  bool isFlipped = true;
  std::string x;
  std::string y;

  std::cin >> n >> x >> y;

  if(n % 2 == 0 && x != y){
    isFlipped = false;
  }
  else if(n % 2 == 0 && x == y){
    isFlipped = true;
  }
  else if(n % 2 != 0 && x == y){
    isFlipped = false;
  }

  for(int i = 0; i < x.size(); i++){
    if(x.at(i) == y.at(i) && n % 2 != 0){
      isFlipped = false;
    }
  }

  if(isFlipped){
    std::cout << "Deletion succeeded" << std::endl;
  }
  else{
    std::cout << "Deletion failed" << std::endl;
  }
  
}
