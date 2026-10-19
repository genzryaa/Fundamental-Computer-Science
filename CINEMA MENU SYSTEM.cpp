#include<iostream>

using namespace std;


int selectMenu()
{
   int choice,number_ticket;
   cout << endl;
   cout << "Enter your movie(item code): ";
   cin >> choice;
   cout << "How much ticket: ";
   cin >> number_ticket;
   cout << endl;

  switch(choice)
     {
     case 100:
        cout << "Movie name: Doctor Strange In The Multiverse Of Madness." << endl;
        cout << "Number of ticket: " << number_ticket << endl;
        cout << "Price: RM 16.00 only." << endl;
        cout << "Total price: " << "RM " << 16.00*number_ticket << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 200:
        cout << "Movie name: Jurassic World Dominion." << endl;
        cout << "Number of ticket: " << number_ticket << endl;
        cout << "Price: RM 13.00 only." << endl;
        cout << "Total price: " << "RM " << 13.00*number_ticket << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 300:
        cout << "Movie name: KKN Desa Penari." << endl;
        cout << "Number of ticket: " << number_ticket << endl;
        cout << "Price of each deal : RM 20.00 only." << endl;
        cout << "Total price: " << "RM " << 20.00*number_ticket << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 400:
        cout << "Movie name: The Silent." << endl;
        cout << "Number of ticket :" << number_ticket << endl;
        cout << "Price of each deal : RM 18.00 only." << endl;
        cout << "Total price: " << "RM " << 18.00*number_ticket<< endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 500:
        cout << "Movie name: Shock Wave 2." << endl;
        cout << "Number of ticket : " << number_ticket << endl;
        cout << "Price of each deal : RM 12.00 only." << endl;
        cout << "Total price: " << "RM " << 12.00*number_ticket << endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     case 600:
        cout << "Movie name: A New Marvel Legend Arrives Morbius." << endl;
        cout << "Number of ticket :" << number_ticket << endl;
        cout << "Price of each deal : RM 16.00 only." << endl;
        cout << "Total price: " <<"RM " <<16.00*number_ticket <<endl;
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~ENJOY YOUR MOVIE~~~~~~~~~~~~~~~~~~~~" << endl;
        break;

     default:
        cout << "############################################\n" << endl;
        cout << "sorry the item code is not in the list." << endl;
        cout << "please choose another item code.\n" << endl;
        cout << "############################################" << endl;
        break;
     }
     return 0;
}
int printMenu()
{
     cout << "\t\t\t\tWelcome to Cinema Planet\t\t\t\t" << endl;
     cout << "\tPlease continue to make all your selections by using the item code on the left"<< endl;
     cout << endl;
     cout << "\t========================MOVIE NAME LIST FOR TODAY=========================\t" << endl;
     cout << endl;
     cout << "ITEM CODE# \t\t MOVIE NAME \t\t\t\t PRICE(per person)" << endl;
     cout << endl;
     cout << "100\t Doctor Strange In The Multiverse Of Madness              RM 16.00 only." << endl;
     cout << "200\t Jurassic World Dominion                                  RM 13.00 only." << endl;
     cout << "300\t KKN Desa Penari                                          RM 20.00 only." << endl;
     cout << "400\t The Silent                                               RM 18.00 only." << endl;
     cout << "500\t Shock Wave 2                                             RM 12.00 only." << endl;
     cout << "600\t A New Marvel Legend Arrives Morbius                      RM 16.00 only." << endl;
     cout << endl;
     cout << "\t=========================================================================\t" << endl;

     return selectMenu();
}
int main()
{
    char name[5];
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    if(age <18)
    {
        cout << "Under 18 are not allowed." << endl;
    }
    else
    {
        cout << "Please choose your movie." << endl;
        cout << endl;
    return printMenu();
    }
	return 0;
}
