#include <iostream>
using namespace std;

class Dzialanie
{
public:
    string nazwa;
    int a;
    int b;
    void wczytaj()
    {
        cout << "Podaj pierwsza liczba: \n";
        cin >> a;
        cout << "Podaj druga liczbe: \n";
        cin >> b;
    }
    virtual void licz(){
    };
};
class Suma : public Dzialanie
{
public:
    void licz()
    {
        wczytaj();
        cout << "Wynnik dodawania: " << a + b << endl;
    };
};
class Roznica : public Dzialanie
{
public:
    void licz()
    {
        wczytaj();
        cout << "Wynnik odejmowania: " << a - b << endl;
    };
};
class Iloczyn : public Dzialanie
{
public:
    void licz()
    {
        wczytaj();
        cout << "Wynnik mnozenia: " << a * b << endl;
    };
};
class Iloraz : public Dzialanie
{
public:
    void licz()
    {
        wczytaj();
        cout << "Wynnik dzielenia: " << a / b << endl;
    };
};
int main()
{
    Dzialanie dzialanie;
    Dzialanie *wsk_dzialanie;
    Suma suma;
    Roznica roznica;
    Iloczyn iloczyn;
    Iloraz iloraz;
    int wejscie;
    cout << "Wybierz dzialanie\n";
    cout << "1.Suma\n";
    cout << "2.Roznica\n";
    cout << "3.Iloczyn\n";
    cout << "4.Iloraz\n";
    cin >> wejscie;
    switch(wejscie)
    {
    case 1:
        suma.licz();
        break;
    case 2:
        roznica.licz();
        break;
    case 3:
        iloczyn.licz();
        break;
    case 4:
        iloraz.licz();
        break;
        default: cout << "Niema opcji";
    }
    return 0;
}
