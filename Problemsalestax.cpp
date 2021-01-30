# include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
  cost = cost * taxRate * 1.0f; //calculates cost with sales tax added
  return cost; //returns new cost value
}
int main() { //method implementation
  float userTaxRate;
  float userCost;
  addTax(userTaxRate, userCost);
  return 0;
}
