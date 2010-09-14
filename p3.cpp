#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	char A[100000];
	int P[10000];
	int i,k,j=0;
	for(i=0;i<100000;i++)
	A[i]='1';
	for(i=2;i<100000;i++)
	{
		if(A[i]=='1')
		{ 
		k=i;
		while(k<100000)
		{
			A[k]='0';
			k+=i;
		}
		P[j]=i;
		j++;
		}
		
	}
//for(i=0;i<j;i++)
//printf("%d",P[i]);
	
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
		printf("%d\n",s);
		scanf("%d",&n);
	}
}
