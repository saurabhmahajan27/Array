/*Write a program by using array and perform following operations:
1.accept array elements
2.display array elements
3.insert element at front
4.insert element at last
5.insert element at given position
6.delete element from front
7.delete element from last
8.delete element from given position
9.reverse array elements
*/
#include<stdio.h>
int a[20],i=1,n;
void accept()
{
	printf("Enter total number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display()
{
	printf("Array is: ");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertlast()
{
	int e;
	printf("Enter element you want  to insert: ");
	scanf("%d",&e);
	while(a[i]!=0)
	{
		i++;
	}
	a[i]=e;
	n++;
	printf("After insertion at last---\n");
	display();
}
void insertfront()
{
	int e,pos;
	printf("enter element you want to insert: ");
	scanf("%d",&e);
	for(i=n;i>=1;i--)
	{
		a[i+1]=a[i];
	}
	a[1]=e;
	n++;
	printf("After insertion at front---\n");
	display();
}	
void insertpos()
{
	int e,pos;
	printf("Enter element you want to insert: ");
	scanf("%d",&e);
	printf("Enter pos to insert: ");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=e;
	n++;
	printf("After insertion at a given position---\n");
	display();
}
void deletelast()
{
	a[n]=0;
	n--;
	printf("After deletion from last---\n");
	display();
}
void deletefront()
{
	for(i=1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("After deletion from front---\n");
	display();
}
void deletepos()
{
	int pos;
	printf("Enter position to delete: ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("after deletion\n");
	display();
}
void reverse(int i,int j)
{
	while(i<=j)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("After reverse---\n");
	display();
}	
int main()
{
	int ch,ans;
	do
	{
		
		printf("Enter your choice:\n1:Accept\n2:Display\n3.Inserrtlast\n4:Insertfront\n5:Insertpos\n6.Deletelast\n7.Deletefront\n8.Deletepos\n9.Reverse\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:accept();
				break;
			case 2:display();
				break;
			case 3:insertlast();
				break;
			case 4:insertfront();
				break;
			case 5:insertpos();
				break;
			case 6:deletelast();
				break;
			case 7:deletefront();
				break;
			case 8:deletepos();
				break;
			case 9:reverse(1,n);
				break;
			default:printf("Error");
		}printf("\nContinue: ");
		scanf("%d",&ans);
	}while(ans==1);
}
/*
Output--

Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
1
Enter total number of elements: 4
Enter array elements: 
1 2 3 4

Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
2
Array is: 1	2	3	4	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
3
Enter element you want  to insert: 5
After insertion at last---
Array is: 1	2	3	4	5	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
4
enter element you want to insert: 6
After insertion at front---
Array is: 6	1	2	3	4	5	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
5
Enter element you want to insert: 7
Enter pos to insert: 3
After insertion at a given position---
Array is: 6	1	7	2	3	4	5	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
6
After deletion from last---
Array is: 6	1	7	2	3	4	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
7
After deletion from front---
Array is: 1	7	2	3	4	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
8
Enter position to delete: 3
after deletion
Array is: 1	7	3	4	
Continue: 1
Enter your choice:
1:Accept
2:Display
3.Inserrtlast
4:Insertfront
5:Insertpos
6.Deletelast
7.Deletefront
8.Deletepos
9.Reverse
9
After reverse---
Array is: 4	3	7	1	
Continue: 0

*/
