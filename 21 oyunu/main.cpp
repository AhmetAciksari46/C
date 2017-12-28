#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void soru();
void oyun();

int main()
{
cout<<"Siz ve bilgisayar arasinda gecmektedir. Kurallar basittir."<<endl;
cout<<"Yeni bir kar istiyorsanýz e ye , istemiyorsanýz h ye basin."<<endl; 
cout<<"En fazla 5 adet kart alabilirsiniz. 5 karttan sonra oyun"<<endl;
cout<<"bitecektir. Cekilen sayilarin toplamý 21 en yakin olan oyunu"<<endl;
cout<<"kazanacaktir. Siz kart almayi biraktiginizde bilgisayarda birakir."<<endl;
cout<<"Turkcelestirme ve sorunlarin giderilmesi : Ahmet ACIKSARI\n"<<endl;

oyun();
}

void oyun()
{
unsigned int x1, x2, x3, x4, x5;
unsigned int y1, y2, y3, y4, y5;
int oyuncupuan;
int pcpuan;
char cevap1, cevap2, cevap3, cevap4;
  
srand (time(NULL));
x1=1+rand()%11;
cout<<"ilk sayiniz: "<<x1<<endl;
y1=1+rand()%11;

cout<<"Devam etmek istermisin? cevaplayiniz e veya h. \n";
cin>>cevap1;
	if ( cevap1=='e' )
		{
		x2=1+rand()%11;
		cout<<"2. sayiniz: "<<x2<<endl;
			if ( x1+x2 > 21 )
		{
			cout<<"Bilgisayar kazandi. hehe!! \n";
			soru();
		}
		y2=1+rand()%11;
		
		cout<<"Devam etmek istermisin? cevaplayiniz e veya h. \n";
		cin>>cevap2;
		
		if (cevap2=='e')
			{
			x3=1+rand()%11;
			cout<<"3. sayiniz: "<<x3<<endl;
				if ( x1+x2+x3 > 21)
			{
				cout<<"Bilgisayar kazandi. hehe!! \n";
				soru();
			}
			y3=1+rand()%11;
			
			cout<<"Devam etmek istermisin? cevaplayiniz e veya h. \n";
			cin>>cevap3;
			if (cevap3=='e')
				{
				x4=1+rand()%11;
				cout<<"4. sayiniz: "<<x4<<endl;
					if ( x1+x2+x3+x4 > 21 )
				{
					cout<<"Bilgisayar kazandi. hehe!! \n";
					soru();
				}
				y4=1+rand()%11;

				cout<<"Devam etmek istermisin? cevaplayiniz e veya h. \n";
				cin>>cevap4;
				if (cevap4=='e')
					{
					x5=1+rand()%11;
					cout<<"5. sayiniz: "<<x5<<endl;		
						if ( x1+x2+x3+x4+x5 > 21 )
					{
						cout<<"Bilgisayar kazandi. hehe!! \n";
						soru();
					}
					y5=1+rand()%11;
					
					cout<<"Daha fazla kart cekme hakkiniz yok. \n";
					cout<<"Sonuc....\n";
					oyuncupuan=x1+x2+x3+x4+x5;
					pcpuan=y1+y2+y3+y4+y5;
					cout<<"Bilgisayar toplami: "<<pcpuan<<endl;
	if ( (oyuncupuan>pcpuan) && oyuncupuan<=21 && pcpuan<=21 )
		cout<<"Sen Kazandin! \n";
	else if ( pcpuan>oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
		cout<<"Bilgisayar kazandi. hehe!! \n";
	else if ( pcpuan==oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
		cout<<"Skor berabere. \n";
	else if ( oyuncupuan>21 && pcpuan<=21 )
		cout<<"Bilgisayar kazandi. hehe!! \n";
	else if ( pcpuan>21 && oyuncupuan<=21 )
		cout<<"Sen Kazandin! \n";
	else if ( pcpuan>21 && oyuncupuan>21 )
		cout<<"Skor berabere. \n";
soru();
} 

				else if ( cevap4=='h' )
					{
						oyuncupuan=x1+x2+x3+x4;
						pcpuan=y1+y2+y3+y4;
						cout<<"Bilgisayar toplami: "<<pcpuan<<endl;
						if ( (oyuncupuan>pcpuan) && oyuncupuan<=21 && pcpuan<=21 )
							cout<<"Sen Kazandin! \n";
						else if ( pcpuan>oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
							cout<<"Bilgisayar kazandi. hehe!! \n";
						else if ( pcpuan==oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
							cout<<"Skor berabere. \n";
						else if ( pcpuan>21 && pcpuan<=21 )
							cout<<"Bilgisayar kazandi. hehe!! \n";
						else if ( pcpuan>21 && oyuncupuan<=21 )
							cout<<"Sen Kazandin! \n";
						else if ( pcpuan>21 && oyuncupuan>21 )
							cout<<"Skor berabere. \n";
					}
					soru();
					} 
			else if ( cevap3=='h' )
				{
					oyuncupuan=x1+x2+x3;
					pcpuan=y1+y2+y3;
					cout<<"Bilgisayar toplami: "<<pcpuan<<endl;
					if ( (oyuncupuan>pcpuan) && oyuncupuan<=21 && pcpuan<=21 )
						cout<<"Sen Kazandin! \n";
					else if ( pcpuan>oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
						cout<<"Bilgisayar kazandi. hehe!! \n";
					else if ( pcpuan==oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
						cout<<"Skor berabere. \n";
					else if ( oyuncupuan>21 && pcpuan<=21 )
						cout<<"Bilgisayar kazandi. hehe!! \n";
					else if ( pcpuan>21 && oyuncupuan<=21 )
						cout<<"Sen Kazandin! \n";
					else if ( pcpuan>21 && oyuncupuan>21 )
						cout<<"Skor berabere. \n";
				}
				soru();
				} 
		else if ( cevap2=='h' )
			{
				oyuncupuan=x1+x2;
				pcpuan=y1+y2;				
				cout<<"Bilgisayar toplami: "<<pcpuan<<endl;
				if ( (oyuncupuan>pcpuan) && oyuncupuan<=21 && pcpuan<=21 )
					cout<<"Sen Kazandin! \n";
				else if ( pcpuan>oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
					cout<<"Bilgisayar kazandi. hehe!! \n";
				else if ( pcpuan==oyuncupuan && oyuncupuan<=21 && pcpuan<=21 )
					cout<<"Skor berabere. \n";
				else if ( oyuncupuan>21 && pcpuan<=21 )
					cout<<"Bilgisayar kazandi. hehe!! \n";
				else if ( pcpuan>21 && oyuncupuan<=21 )
					cout<<"Sen Kazandin! \n";
				else if ( pcpuan>21 && oyuncupuan>21 )
					cout<<"Skor berabere. \n";
			}
			soru();
			}
else if ( cevap1=='h' )
	{
		oyuncupuan=x1;
		pcpuan=y1;
		cout<<"Bilgisayar toplami: "<<pcpuan<<endl;
		if ( oyuncupuan>pcpuan )
			cout<<"Sen Kazandin! \n";
		else if ( pcpuan>oyuncupuan )
			cout<<"Bilgisayar kazandi. hehe!! \n";
		else if ( pcpuan==oyuncupuan )
			cout<<"Skor berabere. \n";
	}
soru();
}

void soru()
{
char sonsoru; 
cout<<"Yeniden oynamak istermisiniz? e veya h. \n";
cin>>sonsoru;
if ( sonsoru=='h' )
exit(EXIT_FAILURE);
else if ( sonsoru=='e' )
oyun();
}





