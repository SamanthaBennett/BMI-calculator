//Samantha Bennett
//Description: this program will calculate a user's bmi

#include <iostream>
using namespace std;

int main() {
    string name;
    //Declare the rest of the variables (weight, height, bmi)
    double weight;
    double height;
    double bmi;

    // Prompt the user for name and store:
    cout << "What is your name?" << endl;
    cin >> name;

    //Prompt for and store the user's weight:
    cout << "What is your weight (lbs.)? " << endl;
    cin >> weight;

    //Prompt for and store the user's height:
    cout << "What is your height (inches) [1 ft = 12 in]? " << endl;
    cin >> height; 

    //Calculate and assign the user's BMI to the appropriate variable:
    bmi = (weight / (height * height) * 703);

    //Display the user's BMI to the console:
    cout << name << "'s BMI is " << bmi << endl;
    
    // Exit the program:
    return 0;
}
