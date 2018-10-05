#include <iostream>
using namespace std;

int main()
{
  //initialize input
  int x;
  int y;
  int n;

  //accept input
  cin >> x;
  cin >> y;
  cin >> n;

  //check each input for fizzbuzz
  for(int i = 1; i <= n; i++){
    if(i % x == 0){
      cout << "Fizz";
      if(i % y == 0){
        cout << "Buzz";
      }
    }
    else if(i % y == 0){
      cout << "Buzz";
    }
    else {
      cout << i;
    }
    cout << endl;
  }
 
}
