#include <iostream>
#include "myheader.h"
using namespace std;

int main()
{

while(true)
{
int pris;
cout << "Write a number ";
cin >>  pris;

int fin_pris = coffeePrice(pris);
cout << "Price " << fin_pris << endl;
}
}
