#ifndef STOCK_HPP
#define STOCK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

class Stock
{

private:
  static double stockPrice;

public:
  Stock()
  {
    stockPrice = 1.00;
  }

  void setPrice(double price) const
  {
    stockPrice = price;
  }


protected:
  double getPrice()
  {
    return stockPrice;
  }

};

double Stock::stockPrice;

#endif
