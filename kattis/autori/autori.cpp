#include <iostream>
#include <string>
#include <locale>

int main(){
    std::locale loc;
    std::string str;
    std::cin >> str;
    char c;
    
    for(int i = 0; i < str.length(); i++){
        c = str[i];
        if(std::isupper(c, loc)){
            std::cout << c;
        }
    }
    
    std::cout << std::endl;
 
}
