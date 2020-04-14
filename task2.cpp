#include <iostream>

using namespace std;

int main()
{
    int i;
    float price, quan, price1=0, price2=0, price3=0, price4=0, price5=0;
    string choice, cond="yes";
    char topp, sz;
    while (cond == "yes") {

        cout << "Welcome to our pizza restaurant" <<endl<< endl << "Please select one of items :-" <<endl <<"   1. SUPER SUPREME - S=50 /M=75.5/ L=100"<< endl<<"   2. CHICKEN SUPREME - S=45/ M=73.88/ L=97.99"<<endl << "   3. MARGHERITA - S=35/ M=70/ L=95"<<endl<<"   4. CHEESE LOVERS - S=60.96/ M=87.75/ L=113"<<endl<<"   5. SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25"<<endl;
        cin >>i;
        switch (i) {
      case 1:
          cout << "Your choice is SUPER SUPREME" <<endl<< "Enter your quantity" <<endl;
          cin >>quan;
          cout << "Enter The size" << endl;
          cin >> sz;
          if (sz=='s'){
            price1 = quan*50;
          }
          else if (sz=='m') {
            price1 = quan*75.5;
          }
          else if (sz='l') {
            price1 = quan*100;
          }
          cout << "Do You Want Extra topping ? " << endl;
    cin >> choice;
    if (choice=="yes") {
        cout << "Please select one or more ( a. mushroom = 10, b. onion =5 , c. sausage =10 )" << endl;
        cin >> topp;
        switch (topp)
        {
            case 'a' :
                price1 = price1 + (quan*10);
                break;
            case 'b' :
                price1 = price1 + (quan*5);
                 break;
            case 'c' :
               price1= price1+(quan*10);
               break;
        }
    }
    cout << "Do you want another item ? "<< endl;
    cin >> cond;
    break;
       case 2:
        cout << "Your choice is CHICKEN SUPREME" <<endl<< "Enter your quantity"<<endl;
        cin >> quan;
        cout << "Enter The size" << endl;
        cin >> sz;
          if (sz=='s'){
            price2 = (quan*45);
          }
          else if (sz=='m'){
            price2 = quan*73.88;
          }
          else if (sz='l') {
            price2 = quan*97.99;
          }
          cout << "Do You Want Extra topping ? " << endl;
    cin >> choice;
    if (choice=="yes") {
        cout << "Please select one or more ( a. mushroom = 10, b. onion =5 , c. sausage =10 )" << endl;
        cin >> topp;
        switch (topp)
        {
            case 'a' :
                price2 = price2 + (quan*10);
                break;
            case 'b' :
                price2 = price2 + (quan*5);
                 break;
            case 'c' :
               price2= price2+(quan*10);
               break;
        }
    }
    cout << "Do you want another item ? "<< endl;
    cin >> cond;
    break;
      case 3:
        cout << "Your choice is MARGHERITA" <<endl<< "Enter your quantity"<<endl;
        cin >> quan;
        cout << "Enter The size" << endl;
        cin >> sz;
          if (sz=='s'){
            price3 = quan*35;
          }
          else if (sz=='m') {
            price3 = quan*70;
          }
          else if (sz='l') {
            price3 = quan*95;
          }
          cout << "Do You Want Extra topping ? " << endl;
    cin >> choice;
    if (choice=="yes") {
        cout << "Please select one or more ( a. mushroom = 10, b. onion =5 , c. sausage =10 )" << endl;
        cin >> topp;
        switch (topp)
        {
            case 'a' :
                price3 = price3 + (quan*10);
                break;
            case 'b' :
                price3 = price3 + (quan*5);
                 break;
            case 'c' :
               price3= price3+(quan*10);
               break;
        }
    }
    cout << "Do you want another item ? "<< endl;
    cin >> cond;
    break;
      case 4:
        cout << "Your choice is CHEESE LOVERS" <<endl<< "Enter your quantity"<<endl;
        cin >> quan ;
        cout << "Enter The size" << endl;
        cin >> sz;
          if (sz=='s'){
            price4 = quan*60.96;
          }
          else if (sz=='m') {
            price4 = quan*87.75;
          }
          else if (sz='l') {
            price4 = quan*113.16;
          }
          cout << "Do You Want Extra topping ? " << endl;
    cin >> choice;
    if (choice=="yes") {
        cout << "Please select one or more ( a. mushroom = 10, b. onion =5 , c. sausage =10 )" << endl;
        cin >> topp;
        switch (topp)
        {
            case 'a' :
                price4 = price4 + (quan*10);
                break;
            case 'b' :
                price4 = price4 + (quan*5);
                 break;
            case 'c' :
               price4= price4+(quan*10);
               break;
        }
    }
    cout << "Do you want another item ? "<< endl;
    cin >> cond;
    break;
      case 5:
        cout << "Your choice is SEA FOOD LOVERS" <<endl<< "Enter your quantity"<<endl;
        cin >> quan;
        cout << "Enter The size" << endl;
        cin >> sz;
          if (sz=='s'){
            price5 = quan*64.47;
          }
          else if (sz=='m') {
            price5 = quan*94.30;
          }
          else if (sz='l') {
            price5 = quan*123.25;
          }
          cout << "Do You Want Extra topping ? " << endl;
    cin >> choice;
    if (choice=="yes") {
        cout << "Please select one or more ( a. mushroom = 10, b. onion =5 , c. sausage =10 )" << endl;
        cin >> topp;
        switch (topp)
        {
            case 'a' :
                price5 = price5 + (quan*10);
                break;
            case 'b' :
                price5 = price5 + (quan*5);
                 break;
            case 'c' :
               price5= price5+(quan*10);
               break;
        }
    }
    cout << "Do you want another item ? "<< endl;
    cin >> cond;
    break;
      }
 }
    price = price1+price2+price3+price4+price5;
    cout << "Thank you for using our application !" << endl << "Your bill is :  " << price << "  L.E" << endl;
    return 0;
}
