#include<bits/stdc++.h>
using namespace std;

class SuperMarket
{
private:
    vector<long long> stock;            //for the validation of stock presence.
    bool Offer=false;                   //check for the presence of offer.
    int price;                          //price for the commodity

    
public:
    SuperMarket();                    //Default constructor.
    double CalculatePrice();         //for the Calculation of Bill with the round upto the 2 Decimal.
    bool Check_Offer();              //for the Validation of the Offer.
    ~SuperMarket();                  //for the  Freeing of  Memory.

};


int main()
{

    return 0;
}
