// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double smallPizzas = 0.0;
  double mediumPizzas =0.0;
  double largePizzas = 0.0;
  double familyPizzas = 0.0;

  double totalPizzas = 0.0;

  double smallPizzaPercent = 0.0;

  double mediumPizzaPercent = 0.0;

  double largePizzaPercent = 0.0;

  double familyPizzaPercent = 0.0;

  cout << "Enter number of small pizzas sold: ";
  cin >> smallPizzas;
  cout << "Enter number of medium pizzas sold: ";
  cin >> mediumPizzas;
  cout << "Enter number of large pizzas sold: ";
  cin >> largePizzas;
  cout << "Enter number of family pizzas sold: ";
  cin >> familyPizzas;
totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;

  smallPizzaPercent = (smallPizzas / totalPizzas) * 100;

  mediumPizzaPercent = (mediumPizzas / totalPizzas) * 100;
  
  largePizzaPercent = (largePizzas / totalPizzas) * 100;

  familyPizzaPercent = (familyPizzas / totalPizzas) * 100;

  cout << "Total pizzas sold: " << totalPizzas;

  cout << "Small pizza percent: " << smallPizzaPercent;

  cout << "Medium pizza percent: " << mediumPizzaPercent;

  cout << "Large pizza percent: " << largePizzaPercent;

  cout << "Family pizza percent: " << familyPizzaPercent << endl;
  
  return 0;
} // end of main function