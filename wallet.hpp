#ifndef WALLET_HPP
#define WALLET_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "stock.hpp"

using namespace std;

class Wallet : public Stock
{
private:
  string name;
  int shares;

public:

  void setName(string n)
  {
    name = n;
  }
  string getName()
  {
    return name;
  }

  void setShares(int s)
  {
    shares = s;
  }

  int getShares()
  {
    return shares;
  }


  double getPrice()
  {
    return Stock::getPrice();
  }

};

#endif
