#include <iostream>
#include <cmath>

using namespace std;
main()
{   double a,b,c; double obwod=0; double pole=0;
    cout<<"Podaj dlugosci bokow trojkata: "<<endl;
    cin>>a>>b>>c; 
    while (a+b<=c || a+c<=b || b+c<=a)
    {
        cout<<"Nie da sie utworzyc takiego trojkata!"<<endl;
        cout<<"Podaj dlugosci bokow trojkata: ";
        cin>>a>>b>>c; 
    }
    obwod=a+b+c; double polobwod=obwod/2;
    pole=sqrt(polobwod*(polobwod-a)*(polobwod-b)*(polobwod-c));
    cout<<"Obwod: "<<obwod<<endl;
    cout<<"Pole: "<<pole<<endl;
    if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
    {
        cout<<"Trojkat jest prostokatny "<<endl;
    }else if (a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
    {
        cout<<"Trojkat jest rozwartokatny "<<endl;
    }else cout<<"Trojkat jest ostrokatny "<<endl;

    if(a==b || a==c || b==c) cout<<"Trojkat jest rownoramienny"<<endl;
    if(a==b && a==c && b==c) cout<<"Trojkat jest rownoboczny"<<endl;

    system("pause");
    return 0;
}