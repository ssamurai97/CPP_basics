#include<vector> //STL vector 

#include"CreditCard.h"


using namespace std;


void test_card(){

vector<CreditCard* > vc (10);

vc[0] = new CreditCard("4190  0244  8398 5309", "Deng Chol ", 2500);

vc[1] = new CreditCard("4385  0399  4487 1986", "Deng chol", 3500);

vc[2] = new CreditCard("6011 4902 3294 2994" ,  "Deng Chol", 5000);

for(int j = 1; j <= 16; j++){

vc[0]->charge_it(double(j)); //explicitly cast to double
vc[1]->charge_it(2* j);
vc[2]->charge_it(double(3 * j ));

  }

cout<<"Card payments: \n";

for(int i = 0; i < 3; i++){

cout<<*vc[i];

while(vc[i]->get_balance() > 100.00){

vc[i]->make_payment(100.0);

cout<<"New balance = " << vc[i] ->get_balance() << "\n";

}

cout<<'\n';

delete vc[i];  // deallocate storage

  }

}

int main(){


test_card();

return 0;

}
