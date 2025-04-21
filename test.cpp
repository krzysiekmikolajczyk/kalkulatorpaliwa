#include <iostream>
using namespace std;
main()
{
	string wyraz; int dlugosc;
	cout<<"Podaj wyraz: "<<endl;
	getline(cin, wyraz);
	dlugosc=wyraz.length();
	cout<<"twoj wyraz w odwrocie: "<<endl;
	for (int i=dlugosc-1; i>=0; i--)
	{
		cout<<wyraz[i];
	}
	cin.get();
}