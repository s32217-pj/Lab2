#include <iostream>

using namespace std;

int main()
{
    int ilosc_pizzy = 0;
    int ilosc_uczestnikow = 0;

    cout << "Ile kawalkow pizzy jest: ";
    cin >> ilosc_pizzy;
    cout << "Ile uczestnikow imprezy jest: ";
    cin >> ilosc_uczestnikow;

    int per_uczestnik = ilosc_pizzy / ilosc_uczestnikow;

    cout << "Kazdy uczestnik dostanie: " << (per_uczestnik == 1) ? " kawalek pizzy\n" : " kawalkow pizzy\n";
    cout << "Dla organizatora zostanie: " << (ilosc_pizzy - (per_uczestnik * ilosc_uczestnikow) == 1) ? " kawalek pizzy\n" : " kawalkow pizzy";
}