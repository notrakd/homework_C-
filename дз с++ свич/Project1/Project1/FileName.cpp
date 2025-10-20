#include <iostream>
using namespace std;

int main() {
    //Здравствуйте, может я конечночто что-то не так понял, но вроде как мы пока не изучали как символы
    // у человека спрашивать, или я конечно не так понял. 
    // но я непоня как сделать именно с символом поэтому надо ввести число 1-4 и будет действие
    // 
  
    // 
    /*int a, b;
    int c; 
    cout << "Enter 2 chisla ";
    cin >> a;
    cin >> b;

    cout << "1 - +  2 - -  3 - *  4 - /): ";
    cin >> c;

    switch (c) {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout  << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout  << a / b;
        break;

    default:
        cout << " NET";
    }*/

    /*int a, b, c;
    cout << "Enter 3 chisla";
    cin >> a >> b >> c;
    int f = a;
    if (a > b && c) {
        cout << a;
    }
    else if (b > a && b > c) {
        cout << b;
    }
    else  {
        cout << c;
    }*/


    //3 задание тоже надеюсь правильно понял, неуверен в нём
    int a, b, c;
    cout << "ENTER 3 CHISLA";
    cin >> a >> b >> c;
    if (a == c) {
        cout << "PARA est";
    }
    else {
        cout << "PARA net";
    }

    return 0;
}
