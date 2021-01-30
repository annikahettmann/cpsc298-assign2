# include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
  taxRate += 1.0f; //adds 1.00 to sales tax to simplify math
  cost = cost * taxRate; //calculates cost with sales tax added
  return cost; //returns new cost value
}
int main() { //method implementation
  float userTaxRate;
  float userCost;
  addTax(userTaxRate, userCost);
  return 0;
}
