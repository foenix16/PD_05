#include<iostream>
using namespace std;
float TaxCalculator(char type,float price)
{
   float taxrate;
   
   if(type=='M')
   taxrate = 0.06;

   if(type=='E')
   taxrate = 0.08;
 
   if(type=='S')
   taxrate = 0.10;
 
   if(type=='V')
   taxrate = 0.12;

   if(type=='T')
   taxrate= 0.15;

   else
   cout << "You Entered an invalid Vehichle type.";

   float taxAmount = price * taxrate;
   float finalPrice = price + taxAmount;
   return finalPrice;
}


int main()
{
   char vehicletype;
   float vehicleprice;

   cout << "Enter the vehicle code type(M, E, S, V, T) :";
   cin >> vehicletype;
   cout << "Enter the vehcile price :";
   cin >> vehicleprice;


   float finalPrice = TaxCalculator(vehicletype, vehicleprice);

   if (finalPrice > 0) 
    {
        cout << "The final price on a vehicle of type " << vehicletype << " after adding the tax is $" << finalPrice << "." << endl;
    }
}