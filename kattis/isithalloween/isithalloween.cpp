#include <iostream>
#include <string>
using namespace std;

int main() {
  std::string date;
  std::getline(std::cin, date);

  if(date == "DEC 25" || date == "OCT 31") {
    std::cout << "yup" << std::endl;
  }
  else {
    std::cout << "nope" << std::endl;
  }
}
