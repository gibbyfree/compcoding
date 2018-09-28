#include <iostream>

int main(){
    int count;
    int n;
    int t;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(t < 0){
            count++;
        }
    }
    std::cout << count << std::endl;
}
