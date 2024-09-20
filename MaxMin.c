/*Write a C program that finds the maximum and the miinimum of three integers taken as user inputs.*/
#include<stdio.h>
int main(void){
    int a,b,c,max,min;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }

    min=a;
    if (b<min)
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }
    
    printf("\n The maximum of the three numbers is %d",max);
    printf("\n The minimum of the three numbers is %d \n",min);
return 0;   
}