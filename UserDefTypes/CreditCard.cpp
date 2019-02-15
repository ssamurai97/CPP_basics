//cpp file 

#include"CreditCard.h"

using namespace std;


CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal)
 :number{no}, name{nm},limit{lim},balance{bal} {}



bool CreditCard::charge_it(double price){


    if(price + balance > double (limit))
      
      return false;


   balance += price;

  return true;  // 

}


void CreditCard::make_payment(double payment){


balance -= payment;

}


ostream& operator<<(ostream& os, const CreditCard& c){

  os<<"Number = " <<c.get_number() <<'\n'
    <<"Name = " <<c.get_name()     <<'\n'
    <<"Balance = "<< c.get_balance() <<'\n'
    <<"Limit = "  << c.get_limit() <<'\n';

return os;
}

