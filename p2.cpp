#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	char A[500];
	int P[150];
	int i,k,j=0;
	for(i=0;i<500;i++)
	A[i]='1';
	for(i=2;i<500;i++)
	{
		if(A[i]=='1')
		{ 
		k=i;
		while(k<500)
		{
			A[k]='0';
			k+=i;
		}
		P[j]=i;
		j++;
		}
		
	}
	
	int n;
	long tmp,s;
	scanf("%d",&n);
	while(n!=0)
	{
		s=1;
		for(i=0;i<j;i++)
		{
			if(P[i]>n)
			break;
			tmp=1;
			while(n%P[i]==0)
			{
				tmp*=P[i];
				n=n/P[i];
			}
			s*=(tmp*P[i] - 1)/(P[i] -1);
		}
		if(n>P[j-1] && n!=1) s*=(n+1);
		printf("%d\n",s);
		scanf("%d",&n);
	}
}
