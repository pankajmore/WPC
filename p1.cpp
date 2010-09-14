#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(void)
{
int n,i,s,tmp;
scanf("%d",&n);
while(n!=0)
{
s=1;
for(i=2;i<=n;i++)
{
tmp=i;
while(n%i==0) 
{
tmp*=i;n=n/i;
}
//s+=i+(n/i);
s*=(tmp -1)/(i-1);

}
printf("%d\n",s);
scanf("%d",&n);
}
}

