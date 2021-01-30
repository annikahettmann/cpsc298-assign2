# include <iostream>
using namespace std;

void zeroBoth(int var1, int var2) { //function with two call-by-reference parameters
  var1 = 0;
  var2 = 0; //sets values of both integers to 0
}
int main() {
  int userVal1;
  int userVal2;
  cin >> userVal1; //read both integers so that zeroBoth function can be called
  cin >> userVal2;
  zeroBoth(userVal1, userVal2); //implement the user values into the zeroBoth function
  return 0;
}
