
 // Omnia Fares Elsayed 20180055
// Nadah Khaled Abdulhameed 20180309


#include <iostream>

using namespace std;

int main()
{
   int input,fehrenheit,celesius;
   float kelvin, kg, gram, pounds, tons, meter, cm, km, ft, yards;
   cout << "Welcome to unit converter" << endl <<endl<<" Choose the number of unit   :-"<< endl << "  1. Temperature in Celsius " << endl << "  2. Mass in Kg " << endl << "  3. Length in Meter " << endl;
   cin >> input;

   if (input==1)
   {
       cout << "Enter value of temperature"<<endl;
       cin >> celesius;
       fehrenheit= (celesius*9/5)+32;
       kelvin= celesius+273.15;
       cout << " Temperature in Fahrenheit = " << fehrenheit << endl << " Temperature in Kelvin = " << kelvin << endl;
   }
   if (input==2)
   {
       cout << "Enter value of Mass" << endl;
       cin >> kg;
       gram= kg*1000;
       pounds= kg*2.205;
       tons= kg*0.001;
       cout <<" Mass in Grams = "<<gram<<endl<<" Mass in Pounds = "<<pounds<<endl<<" Mass in Tons"<<tons<<endl;
   }
   if (input==3)
   {
       cout << "Enter value of Length" << endl;
       cin >> meter;
       cm= meter*100;
       km= meter*0.001;
       ft= meter*3.281;
       yards= meter*1.094;
       cout<<"Length in Centimeters = "<<cm<<endl<<"Length in Kilometers = "<<km<<endl<<"Length in Feet = "<<ft<<endl<<"Length in Yards = "<<yards<<endl;
   }
    return 0;
}
