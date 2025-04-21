#include <iostream>
using namespace std;
main()
{
    int liczba, linia=0, l=0;
    cout<<"Podaj liczbe: "; cin>>liczba;
    linia=liczba;
    for (int i=0; i<liczba-1; i++)
    {
        for (int j=0; j<l; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int k=0; k<(linia*2)-3; k++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        linia=linia-1;
        l++;
    }

    for (int n=0; n<liczba-1; n++)
    {
        cout<<" ";
    }
    cout<<"*"<<endl;

    linia=0; l=liczba;

    for (int p=0; p<liczba-1; p++)
    {
        for (int r=0; r<l-2; r++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int s=0; s<=linia; s++)
        {
            cout<<" ";
            
        }
        cout<<"*";
        cout<<endl;
        linia=linia+2;
        l--;
    }
    cout<<endl;
    system("pause");
}