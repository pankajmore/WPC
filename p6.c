#include<stdio.h>

#include<stdlib.h>

struct node
{

	int data;

	struct node* next;

};

typedef struct node Node;

int main(void)

{ 

	Node *head;

	Node *Head;

	int T, j=0, count=0,k,i;

	int m[100];

	int n[100];

	scanf("%d",&T);

	while(j<T)

	{

		scanf("%d",&n[j]);
		scanf("%d",&m[j]);

		j++;

	}

	j=0;

	while(j<T)

	{

		Head= (Node*)malloc(sizeof(Node));

		Head->data=0;

		Head->next=NULL;

		head=Head;

		i=1;

		while(i<n[j])

		{

			Node *temp;
			
			temp=(Node*)malloc(sizeof(Node));

			temp->data=i;

			temp->next=NULL;
			
			head->next=temp;

			head=head->next;

			i++;

		}

		head->next=Head;
		head=Head;
		count=n[j]-1;
		while(count>0)

		{

			k=1;

			while(k<(m[j]-1))

			{

				head=head->next;

				k++;

			}

			Node *t =head->next;

			head->next=t->next;

                        printf("deleted value = %d \n",t->data);	
			t->next=NULL;
			free(t);

			count--;

		}

		printf("%d \n",head->data);

		j++;
		Head->next = NULL;
		free(Head);

	}

return 0;

}
