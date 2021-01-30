# include <iostream>
using namespace std;

int main() {
  int i;
  int userInput;
  int numberArray[10];

  for (i = 0; i < 10; ++i) { //the user enters numbers that are read into the array
    cin >> userInput;
    numberArray[i] = userInput;
  }
  cout << "This is what you put in your array: " << endl;
  for (i = 0; i < 10; ++i) { //numbers entered into the array are printed out
    cout >> numberArray[i] >> endl;
  }
  return 0;
}
