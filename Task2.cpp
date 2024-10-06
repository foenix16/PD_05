#include <iostream>
#include <string>
using namespace std;

string PyramidVolume(double l, double w, double h, string unit) 
{
    double volume = (l * w * h) / 3.0;

    if (unit == "millimeters") 
    {
        volume *= 1000000000; 
    } 
    else if (unit == "centimeters") 
    {
        volume *= 1000000; 
    } 
    else if (unit == "kilometers") 
    {
        volume /= 1000000000; 
    }
    
    cout << volume << " cubic " << unit << endl;
}

int main()
{
    double w, l, h; 
    string unit;

    cout << "Enter the Length of the Pyramid (in meters): ";
    cin >> l; 
    cout << "Enter the Height of the Pyramid (in meters): ";
    cin >> h; 
    cout << "Enter the Width of the Pyramid (in meters): ";
    cin >> w; 
    
    cout << "Enter the unit for volume (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    cout << PyramidVolume(l, w, h, unit) << endl;

    return 0;
}

