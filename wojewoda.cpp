int main()
{
    Student Klasa[5];

    for(int i = 0; i < 5; ++i)
    {
        cout << "STUDENT NR: " << i << endl;
        cout << "Podaj nazwisko studenta: ";
        cin >> Klasa[i].Nazwisko;
        cout << "Podaj ocene z ZIOP: ";
        cin >> Klasa[i].ZIOP;
        cout << "Podaj ocene z SO: ";
        cin >> Klasa[i].SO;
        cout << "Podaj ocene z Grafiki: ";
        cin >> Klasa[i].Grafika;
        cout << "Podaj ocene z MySql: ";
        cin >> Klasa[i].MySql;
        cout << endl;
    }

    int nrStudenta, nrPrzedmiotu;

    while(true)
    {
        cout << endl << "SPRAWDZ OCENE" << endl;
        cout << "Podaj numer studenta: ";
        cin >> nrStudenta;
        cout << "Podaj numer przedmiotu (ZIOP = 0, SO = 1, Grafika = 2, MySql = 3): ";
        cin >> nrPrzedmiotu;
        cout << endl << "Ocena z przedmiotu: " << Klasa[nrStudenta].Ocena(nrPrzedmiotu) << endl;
    }

    return 0;
}