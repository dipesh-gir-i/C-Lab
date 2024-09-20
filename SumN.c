#include<stdio.h>
int main(void){
int i,N,sum,cnt=0;
printf("Enter the number N:");
scanf("%d",&N);
for (i = 1; i <= N; i++)
{
    sum=i%3;
    if (sum==0)
    {
        continue;
    }
    else{
    cnt += i;
    }
}
printf("\n The sum of the series is %d \n",cnt);
    return 0;
}