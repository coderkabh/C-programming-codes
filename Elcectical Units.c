#include<stdio.h>
void main()
{
    int units,val2,val3;
    char name[20];
    float temp1,temp2,temp3=0,cost1,cost;
    printf("Enter the name of Costumer:-\n");
    gets(name);

    printf("Enter the number of units:- \n");
    scanf("%d",&units);

    if(units<=100)
    {
        cost1=units*0.4;
        printf("The monthly charge of %s is :-   ",name);

        printf("%0.2f",cost1+50);
    }

    if(units>100 && units<=300)
    {
        val2=units-100;
        temp2=val2*0.5;
        cost=temp2+40;
        printf("The monthly charge of %s is :-   ",name);
        printf("%0.2f",cost+50);
    }
    if(units>300)
    {
        val3=units-300;
        temp3=val3*0.6;
        temp3=140+temp3;
        printf("The monthly charge of %s is :-   ",name);
        printf("%0.2f",temp3+50);
    }

    }
