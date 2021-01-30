# include <iostream>
# include <string>
# include <cmath>
using namespace std;
//unchanging conversion values:
const int INCHES_IN_FOOT = 12; //12 inches in a foot
const int CENTIMETERS_IN_METER = 100; //100 centimeters in a meter
const double METERS_IN_FOOT = 0.3048; //0.3048 meters in a foot

void userInput(int feet, int inches) { //function for user input
  cout << "Give me a height value in feet and inches." << endl;
  cin >> feet;
  cout << endl;
  cin >> inches;
}

void calculations(int feet, int inches, int& meters, int& centimeters) {
  const double CENTIMETERS_IN_FOOT = METERS_IN_FOOT * CENTIMETERS_IN_METER; //uses conversion values meters per foot and centimeters per meter to make calculation simpler
  const double CENTIMETERS_IN_INCH = CENTIMETERS_IN_FOOT / INCHES_IN_FOOT; //takes above value and divides by conversion value inches per foot
  double totalCentimeters;

  totalCentimeters = (feet * CENTIMETERS_IN_FOOT) * (inches * CENTIMETERS_IN_INCH); //gets centimeter value to split up into meter and centimeter values
  meters = round(totalCentimeters) / CENTIMETERS_IN_METER; //rounds total centimeters and divides by centimeters per meter value
  centimeters = round(totalCentimeters) % CENTIMETERS_IN_METER; //gets remainder value using centimeters per meter value
}

void conversionOutput(int meters, int centimeters){ //outputs the meter and centimeter results
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

int main() { //function implementations in main method
  int userFeet;
  int userInches;
  int userMeters = 0; //sets userMeters and userCentimeters to 0 until calculation happens
  int userCentimeters = 0;
  string userString;

  userInput(userFeet, userInches);
  calculations(userFeet, userInches, userMeters, userCentimeters);
  conversionOutput(userMeters, userCentimeters);

  cout << "Would you like to do this calculation again?"
  cin >> userString;
  while (userString != "exit") { //loop that allows user to repeat process until they type 'exit' to quit
    userInput(userFeet, userInches);
    calculations(userFeet, userInches, userMeters, userCentimeters);
    conversionOutput(userMeters, userCentimeters);
  }
  return 0;
}
