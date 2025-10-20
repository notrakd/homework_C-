//Запитайте у користувача в циклі
//його дохід за 5 місяців.
//Порахуйте загальний дохід(суму) та середнє аріфметичний
//за ці місяці

#include <iostream>
using namespace std;
int main() {
//    int a = 0, b;
//
//    for (int i = 1; i <= 5; i++) {
//        cout << "ENTER" << i;
//        cin >> b;
//        a += b;
//    }
//
//    int c = a / 5;
//
//    cout << "ALL DOHID " << a;
//    cout << "NE ALL DOHID " << c;
//

    /*Запитайте у користувача число от 1 до 9
        виведіть таблицю множення на даний варіант
        Наприклад :
    k = 3
        1 * 3 = 3
        2 * 3 = 6
        і тд до 10*/


    int a;
    cin >> a;

    cout << "TABLICHA MNOZENYA NA " << a << " ";

    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << a << " = " << i * a << endl;
    }
    return 0;
}