//Structure pointer passing as function argyments
#include<stdio.h>
#include<stdlib.h>
void display( struct book *b);
struct book {
	char name[20];
	int pages;
	float price;
}b1;
int main()
{

	printf("\nInput the details of the book\n");
		printf("\nEntre the name of the book:\n");
		scanf("%s",b1.name);
		printf("\nEntre the numbers of pages:\n");
		scanf("%d",&b1.pages);
		printf("\nEntre the prince of the book:\n");
		scanf("%f",&b1.price);
		printf(" \n ");	
		display(&b1);
printf("\nRecord of the book\n");
	printf("\n Name: %s\n Pages: %d\n Price: %f\n",b1.name,b1.pages,b1.price);
	printf("\n");
return 0;
}
void display(struct book *b)
{
printf("\nRecord of the book\n");
printf("\n Name: %s\n Pages: %d\n Price: %f\n",b->name,b->pages,b->price);
b->price=b->price+50;	
}
