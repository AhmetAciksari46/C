#include <iostream>
using namespace std;
main()
{
int x,y,z;

cout << "birinci sayiyi giriniz;";	
cin >> x;

cout << "ikinci sayiyi giriniz;";	
cin >> x;

cout << "islemi seciniz-\n 1-Toplama \n 2-Cikarma \n 3-Bolme \n 4-Carpma";	
cin >> z;

switch(z)
	{
		case 1:
			{
				cout << x+y;
			}
			break;
		case 2:
			{
				cout << x-y;
			}
			break;
		case 3:
			{
				cout << x/y;
			}
			break;
		case 4:
			{
				cout << x*y;				
			}	
			break;	
		
		default:
			{
				cout << "Hatali rakam girdiniz.";
			}
	}

}
