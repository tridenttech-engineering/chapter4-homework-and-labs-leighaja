//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  const double pi = 3.14;
  double height   = 0.0;
  double radius   = 0.0;
  
  double volume   = 0.0;

  cout << "Enter height: ";
  cin >> height;
  cout << "Enter radius: ";
  cin >> radius;

  volume = pi * radius * radius * height;

  cout << "Volume: " << volume << endl;

  return 0;

} //end of main function
