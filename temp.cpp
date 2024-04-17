/*Program purpose: LAB_WORK_2
Programmer:Izzrieq Illhan Pahlavi Bin Mohammad Redha
Date:17/4/2024
Filename:temp.cpp
*/

#include <iostream>

using namespace std;

// Function prototypes to pass the parameter
// function not defined
double celciusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

int main()
{
    double temperature;
    char scale;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter scale (C for Celsius, F for Fahrenheit): ";
    cin >> scale;

    if (scale == 'C' || scale == 'c')
    {
        // fix the function call by pass correct parameter
        // if statement dont have {}
        // using (temperature) instead of (scale)
        double convertedTemp = celciusToFahrenheit(temperature);
        cout << "Converted temperature: " << convertedTemp << " F" << endl;
    }
    else if (scale == 'F' || scale == 'f')
    {
        double convertedTemp = fahrenheitToCelcius(temperature);
        cout << "Converted temperature: " << convertedTemp << " C" << endl;
    }
    else
    // fix the error message
    {
        cout << "Invalid Scale" << endl;
    }

    return 0;
}

// Function declaration
// adding datatype to the function
double celciusToFahrenheit(double celcius)
{
    return (celcius * 9 / 5) + 32;
}

double fahrenheitToCelcius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
