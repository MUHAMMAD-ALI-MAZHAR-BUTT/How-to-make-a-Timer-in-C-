//************************************ Efficient Learning world ****************************************
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void Display_Time()
{
	int hr=0,min=0,sec=0;
	while(true)
	{
		Sleep(30);
		Beep(900,100);
		system("cls");
		cout<<"\n\n\n";
		cout<<"******************************* Timer  ***************************************"<<endl;
		cout<<"\t\t"<<hr<<" hours : "<<min<<"minutes : "<<sec<<"seconds "<<endl;
		cout<<"\n\n";
		cout<<"******************************************************************************"<<endl;
		sec++;			//sec=sec+1;
		if(sec==60)
		{
			sec=0;
			min++;
			if(min==60)
			{
				min=0;
				hr++;			// hr=hr+1;
			}
		}
	}
}
int main()
{
Display_Time();
}

