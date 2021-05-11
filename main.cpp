//Name: Angela DeLeo
//Date: 05.04.2021
//Exercise: Lab10 Solution

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
#include "wallet.hpp"
#include "stock.hpp"

using namespace std;

int main()
{
  const int MAX = 20;
  Wallet w[MAX];
  int choice, shares, count = 0;
  double price, value;
  string name;

  do {
    cout << "        *** TUFFY TITAN STOCKS MAIN MENU ***" << endl << endl;
    cout << "1) Change stock price" << endl;
    cout << "2) Stock holder purchase" << endl;
    cout << "3) Print report of sock  holders" << endl;
    cout << "4) Exit the program" << endl;
    cout << endl << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter price: ";
        cin >> price;
        w[count].setPrice(price);
        break;

      case 2:
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Shares: ";
        cin >> shares;

        w[count].setName(name);
        w[count].setShares(shares);
        count++;
        break;

      case 3:
        cout << "================ STOCK HOLDER REPORT ================" << endl << endl;
        cout << "Name                     Shares      Price      Value" << endl;
        cout << "==================== ========== ========== ==========" << endl;
        for(int i = 0; i < count; i++)
        {
          value = w[i].getPrice() * w[i].getShares();

          cout << left << setw(20) << w[i].getName()
               << right << setw(11) << w[i].getShares()
               << right << setw(11) << fixed << setprecision(2) << w[i].getPrice()
               << right << setw(11) << fixed << setprecision(2) << value
               << setw(20) << setfill(' ') << endl;
        }
        cout << endl;
        break;

      case 4:
        exit(1);
        break;

      default:
        cout << "invalid choice." << endl;
        break;

    }

  } while(choice != 4 || count == MAX);

  return 0;
}
