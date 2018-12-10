#include<stdio.h>
void main()
{
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year=1901;
	int dow=2;

	int fs=0;
	while(year<=2000)
		{
			if(year%4==0)
			mon[1]=29;
			
		for(int i=0; i<12; i++)
		{
			for(int d=1;d<=mon[i];d++)
				{
				if(dow==7)
				dow=0;
				
				if(dow==0 && d==1)
				fs++;
				
				dow++;
				}
				}
		mon[1]=28;
		year++;
		}
		printf("%d\n",fs);
				
			
}
