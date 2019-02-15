#pragma once

#include<string>
#include<iostream>


class CreditCard{
public:

   CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0);// constructor
                                                   // accessor functions
   std::string get_number()const { return number; }

   std::string get_name()const { return name; }
   
   double      get_balance() const { return balance; }

   int         get_limit() const { return limit; }



  bool charge_it (double price); // make a charge

  void make_payment(double payment); // make a payment

private://private member data

   std::string number; // credit card number

   std::string name;   // card own's name
   
   int         limit;  // credit limit
   
   double      balance; // credit card balance
};

std::ostream& operator<< (std::ostream& os, const CreditCard& c );// print card information

