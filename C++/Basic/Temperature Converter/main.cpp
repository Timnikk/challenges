#include<iostream>
using namespace std;

double temp;

int main() {
    cout << "CELSIUS TO FAHRENHEIT CONVERTOR" << endl << "=================================" << endl << " " << endl;
    cout << "Enter the temperatur in celsius: ";

    //the user enters the temperature in celsius
    cin >> temp;
    /*
    To convert the temperature from celsius to fahrenheit we can use this equation:
    °F = (°C * 1.8) + 32
    °C - represents the temperature in celsius
    °F - represents the temperature in fahrenheit
    */
    cout << (temp * 1.8) + 32;
    return 0;
}
