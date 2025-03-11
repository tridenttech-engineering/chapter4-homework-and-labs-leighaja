// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {

  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endingBalance = 0.0;

  cout << "Enter beginning balance: ";
  cin >> beginningBalance;
  cout << "Enter total deposits: ";
  cin >> totalDeposits;
  cout << "Enter totalWithdrawals: ";
  cin >> totalWithdrawals;
  endingBalance = beginningBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  
  return 0;
} // end of main function