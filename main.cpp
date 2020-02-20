//Orlando Valdez 2-19-2020
//COSC 1436 
//Unit 6 Assignment Sorting
#include <iostream>
#include <algorithm>
#include "accounts.h"
using namespace std;

void printArray(int[], int);

int main() 
{
  
  cout << "\nStart: " << cpuTime() << endl;
  
  sort(accountBalances, accountBalances+maxAccounts);
  reverse(accountBalances, accountBalances+maxAccounts);
  printArray(accountBalances, maxAccounts);
  cout << "\nEnd: " << cpuTime() << endl;


  return 0; 
}

void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted Values in Array: " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << arrayVals[i] << ",";

  }
  
}

