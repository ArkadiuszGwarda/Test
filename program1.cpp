#include <iostream>
#include<string>
using namespace std;

class Samochod_osobowy
{
private:
    string producent;
public:
//didaje
//to testowo
//dla sprawdzenia
    Samochod_osobowy(string producent){};
    Samochod_osobowy(const Samochod_osobowy())
    {
        producent = "bmw";
    };
    ~Samochod_osobowy
    void dodaj_producenta()
    {
        string n;
        producent = n;
    }
    void wyswietl_producenta()
    {
        string n;
        cout << "Producent:" << n;wewrferfefwgrwgwg
    }
};
class marka:public Samochod_osobowy
{
public:
    string generacja;
    string model;
    string n;
    void wpisz ()
    {
        cout << "Podaj producenta: ";
        cin >> n;
        cout << "Podaj generacje: ";
        cin >> generacja;
        cout << "Podaj model: ";
        cin >> model;
    }
    void wyswietl()
    {
        cout << "Producent to " << n;
        cout << "Generagja samochodu- " << generacja;
        cout << "Model: " << model;
    }
};

int main()
{
    Samochod_osobowy kredens;
    kredens.dodaj_producenta();
    kredens.wyswietl_producenta();
    marka poldek;
    poldek.wpisz();
    poldek.wyswietl();
    return 0;
}
