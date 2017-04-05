#include <iostream>

using namespace std;

struct Student
{
    string Nazwisko;
    float ZIOP, SO, Grafika, MySql;
    Student()
    {

    }
    Student(string Nazwisko, float ZIOP, float SO, float Grafika, float MySql)
    {
        this->Nazwisko = Nazwisko;
        this->ZIOP = ZIOP;
        this->SO = SO;
        this->Grafika = Grafika;
        this->MySql = MySql;
    }
    float Ocena(int nrPrzedmiotu)
    {
        switch(nrPrzedmiotu)
        {
        case 0:
            return ZIOP;
        case 1:
            return SO;
        case 2:
            return Grafika;
        case 3:
            return MySql;
        }
    }
};

