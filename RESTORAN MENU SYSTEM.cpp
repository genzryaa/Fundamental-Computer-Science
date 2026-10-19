#include<iostream>

using namespace std;

 int main()
 {
     int order,no_deal;
     cout << "====================MAIN MENU=====================" << endl;
     cout << endl;
     cout << "1) CHICKEN CHOP           RM 15.00 only." << endl;
     cout << "2) LAMB CHOP              RM 25.00 only." << endl;
     cout << "3) SPAGHETTI AGLO OLIO    RM 13.00 only." << endl;
     cout << "4) SPAGHETTI BOLOGNESE    RM 10.00 only." << endl;
     cout << "5) TORTILLA SANDWICH      RM 12.00 only." << endl;
     cout << "6) FISH AND CHIPS         RM 16.00 only." << endl;

     cout << endl;
     cout << "Please select the order number: ";
     cin  >> order;
     cout << "Please enter the number of deal: ";
     cin  >> no_deal;
     cout << endl;

     switch(order)
     {
     case 1:
        cout << "Order : CHICKEN CHOP." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 15.00 only." << endl;
        cout << "Total price : " << "RM " << 15.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 2:
        cout << "Order : LAMB CHOP." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 25.00 only." << endl;
        cout << "Total price : " << "RM " << 25.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 3:
        cout << "Order : SPAGHETTI AGLO OLIO." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 13.00 only." << endl;
        cout << "Total price : " << "RM " << 13.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 4:
        cout << "Order : SPAGHETTI BOLOGNESE." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 10.00 only." << endl;
        cout << "Total price : " << "RM " << 10.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 5:
        cout << "Order : TORTILLA SANDWICH." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 12.00 only." << endl;
        cout << "Total price : " << "RM " << 12.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 6:
        cout << "Order : FISH AND CHIPS." << endl;
        cout << "Number of deal : " << no_deal << endl;
        cout << "Price of each deal : RM 16.00 only." << endl;
        cout << "Total price : " << "RM " << 16.00*no_deal << " " << "only." << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~THANK YOU FOR COMING~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     default:
        cout << "############################################\n" << endl;
        cout << "sorry the order number is not in the menu." << endl;
        cout << "please choose another menu.\n" << endl;
        cout << "############################################" << endl;
        break;
     }
     return 0;
 }
