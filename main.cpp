/*Chase Brock

COSC-1436

This program determines whether a hair follicle is from a Human or an Animal based on the ratio of its widths. On top of this,
it calculates the height of an individual from its gender and the length of its femur bone. */

#include <iostream> // for cout and cin
#include <string> // for string variables
#include <iomanip> // for formatting
using namespace std;

string getHairType(float, float); // declaring getHairType function
float getHeight(int, float); // declaring getHeight function

int main()
{
    float medullaDiameter, entireHair, femurHeight; // initializing variables
    int gender;
    
    cout << "Welcome inspector,\n\nHair Analysis:" << endl;
    cout << "Please enter the medulla width in mm: ";
    cin >> medullaDiameter; // stores user input
    cout << "Please enter the entire hair width in mm: ";
    cin >> entireHair;
    cout << "\n"; // blank line
    cout << "Height Analysis:" << endl;
    cout << "Please enter the gender (0 = male, 1 = female): ";
    cin >> gender;
    cout << "Please enter the femur length in cm: ";
    cin >> femurHeight;
    
    if (getHairType(medullaDiameter, entireHair) == "Animal") // if function returns "Animal"
    {
        cout << "\nThe sample provided is from an animal" << endl;
    }
    else // if function returns "Human"
    {
        cout << "\nThe sample provided is from a human" << endl;
    }
    
    cout << "The height is estimated to be " << fixed << setprecision(3) << getHeight(gender, femurHeight) << endl;
    // ^this line displays the return value of getHeight(gender, femurHeight)
    
    return 0; // exits the program
}

string getHairType(float x, float y) // function to determine type of hair dependent on its ratio of widths
{
    if (x / y >= 0.5) // if the ratio of the medulla wdith to the entire hair width is greater than or equal to 0.5
    {
        return "Animal"; // function returns string "Animal"
    }
    else // if x / y is greater than 0.5
    {
        return "Human"; // function returns string "Human"
    }
}

float getHeight(int v, float w) // function to determine height of individual based on gender and femur length
{
    float total;
    if (v) // this statement runs true if v != 0 (female)
    {
        return 2.317 * w + 61.412; // 61.412 + 2.317w
    }
    else // this statement runs true if v = 0 (male)
    {
        return 2.238 * w + 69.089; // 69.089 + 2.238w
    }
}

