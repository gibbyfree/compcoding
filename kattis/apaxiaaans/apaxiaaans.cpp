#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string str;
  std::cin >> str;
  std::vector<char> letters(str.begin(), str.end());

  std::cout << letters[0];

  for(int i = 1; i < letters.size(); i++){
    if(letters[i - 1] != letters[i]){
      std::cout << letters[i];
    }
  }
}
