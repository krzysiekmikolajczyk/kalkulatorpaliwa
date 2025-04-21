#include <iostream>
using namespace std;
main()
{   int liczba, linia=1;
    cout<<"Podaj liczbe calkowita: "<<endl;
    cin>>liczba;
    if (liczba%2==0) liczba=liczba-1;
    for (int i=0; i<liczba/2+0.5; i++) //polecenie dla jednej linijki
    {   for(int j=0; j<liczba-linia; j++)
        {cout<<" ";};
        for (int k=0; k<linia; k++)
        {cout<<"*";}
        cout<<endl;
        linia=linia+2;  
    }
    system("pause");
    return 0;
}