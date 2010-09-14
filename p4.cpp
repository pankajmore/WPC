#include<iostream>
#include<stdio.h>
int main(void)
{
int num;
scanf("%d",&num);
while(num!=0)
{
    int sum=0;
    for(int i=1; i*i<=num; i++)
        sum += (num%i)? 0 : ((i*i==num)? i : i+num/i);
     printf("%d",sum);
	scanf("%d",&num);
}
}
