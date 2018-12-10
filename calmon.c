

/*You are given the following information, but you may prefer to do some research for yourself.

    1 Jan 1900 was a Monday.
    Thirty days has September,
    April, June and November.
    All the rest have thirty-one,
    Saving February alone,
    Which has twenty-eight, rain or shine.
    And on leap years, twenty-nine.
    A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/




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
