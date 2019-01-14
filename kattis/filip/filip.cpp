#include <iostream>
#include <string.h>
#include <stdio.h>
#include <sstream> 


int main() {
  std::string initX, initY;
  std::cin >> initX >> initY;
  int xn = initX.length();
  int yn = initY.length();

  char x[xn+1];
  char y[yn+1];

  strcpy(x, initX.c_str());
  strcpy(y, initY.c_str());

  char finalX[xn+1];
  char finalY[yn+1];
  finalX[0] = x[2];
  finalX[1] = x[1];
  finalX[2] = x[0];
  finalY[0] = y[2];
  finalY[1] = y[1];
  finalY[2] = y[0];

  std::string flippedX(finalX);
  std::string flippedY(finalY);

  std::stringstream lastX(flippedX);
  std::stringstream lastY(flippedY);

  int newDigitX = 0;
  int newDigitY = 0;

  lastX >> newDigitX;
  lastY >> newDigitY;

  if(newDigitX > newDigitY) {
    std::cout << newDigitX << std::endl;
  }
  else {
    std::cout << newDigitY << std::endl;
  }
}
