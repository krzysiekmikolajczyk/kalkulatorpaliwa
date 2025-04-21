#include<iostream>
#include<windows.h>
using namespace std;
main()
{   int ilosc;
    cout<<"oceny ilu uczniow chcesz wpisac? "<<endl;
    cin>>ilosc;
    int oceny[ilosc], najw=0, najn=6, pow=0;
    float srednia=0;
    for (int i=1; i<=ilosc; i++)
    {
        system("cls");
        cout<<"wprowadz ocene "<<i<<". studenta"<<endl;
        cin>>oceny[i-1];
        Sleep(100);
        if (oceny[i-1]>6 || oceny[i-1]<1)
        {
            cout<<"nie ma takiej oceny!"<<endl;
            Sleep(500);
            i--;
        }
    }
    system("cls");
    for (int j=0; j<=ilosc-1; j++)
    {
        srednia=srednia+oceny[j];
        if (oceny[j]>=najw && oceny[j]>=1 && oceny[j]<=6)
        {
            najw=oceny[j];
        } 
         if (oceny[j]<=najn && oceny[j]>=1 && oceny[j]<=6)
        {
            najn=oceny[j];
        } 
    }
    
    cout<<"srednia ocen: "<<srednia/ilosc<<endl;
    cout<<"najwyzsza ocena: "<<najw<<endl;
    cout<<"najnizsza ocena: "<<najn<<endl;

    for (int k=0; k<=ilosc-1; k++)
    {
        if (oceny[k]>srednia/ilosc) pow++;
    }
    cout<<"liczba studentow ze srednia powyzej sredniej: "<<pow<<endl;
    system("pause");
    return 0;
}