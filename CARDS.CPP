
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
	{
		clrscr();
		int w,x,y,z;

		cout<<"\nEnter value of 1st card:";
		cin>>w;
		cout<<"\nEnter value of 2nd card:";
		cin>>x;
		cout<<"\nEnter value of 3rd card:";
		cin>>y;
		cout<<"\nEnter value of 4th card:";
		cin>>z;

		int n;
		if(x>y && x>z && y>z)//HML
		n=1;
		else if(x>y && x>z && z>y)//HLM
		n=2;
		else if(x<y && x>z)//MHL
		n=3;
		else if(x<z && x>y)//MLH
		n=4;
		else if(x<y && x<z && y>z)//LHM
		n=5;
		else if(x<y && x<z && y<z)//LMH
		n=6;
		int a=(w/10);
		int b=(w%10);
		a=a+n;
		cout<<"\nThe 5th card is:";
		cout<<a;
		switch(b)
		{
		case 1:cout<<" Club";
		break;
		case 2:cout<<" Heart";
		break;
		case 3:cout<<" Spade";
		break;
		case 4:cout<<" Diamond";
		break;
		}



		getch();
	}


