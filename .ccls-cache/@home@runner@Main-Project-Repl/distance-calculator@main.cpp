#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x1;
  float x2;
  float y1;
  float y2;

  cout << "Enter the x part of the first coordinate: ";
  cin >> x1;

  cout << "Enter the y part of the second coordinate: ";
  cin >> x2;

  cout << "Enter the x part of the first coordinate: ";
  cin >> y1;

  cout << "Enter the y part of the second coordinate: ";
  cin >> y2;

  float xcomp = powf((x1 - x2), 2);
  float ycomp = powf((y1 - y2), 2);

  float distance = powf(xcomp + ycomp, 0.5);

  cout << "The distance between the coordinates is: " << distance; 
}