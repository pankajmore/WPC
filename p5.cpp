#include<iostream>
#include<stdio.h>
using namespace std;
int f(int n,int k)
{
if(n==1) return 0;
else return (f(n-1,k)+k)%n;
}

int main()
{
int n,t,k;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
scanf("%d %d",&n,&k);
printf("%d\n",f(n,k));
}
}
