#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<malloc.h>
struct item{
     char name[10];
     int price;
     struct item *next;
};

struct item *head=NULL;

void addItem_admin(){
	
	char n[10];
	int p;
	printf("enter name of the ice cream\n");
	gets(n);
	printf("enter amount\n");
	scanf("%d",&p);
  	addItem(n,p);
	
}

void addItem(char n[],int p){

	struct item *ptr,*new_item;
	new_item=(struct item *)malloc(sizeof(struct item));
  //	new_item->name=n;
	new_item->price=p;
	strcpy(new_item->name,n);
	new_item->next=NULL;
	
	//traversing
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=new_item;
}

void create(){
	int i=0;
	char name[10];
	char arr_n[][10]={"a1","b2","c3","d4","e5","f6","g7","h8","i9","j0"};
	int arr_p[]={10,20,30,40,50,60,70,80,90,100};
	for(i=0;i<10;i++){
		strcpy(name,arr_n[i][10]);
		addItem(name,arr_p[i]);	
	}
}
void menu()
{
	struct item *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%s \t %d\n",ptr->name,ptr->price);
		ptr=ptr->next;
	}
}
int main()
{
	int c;
	additem("banana",10);
	do{
		printf("1. MENU AND ORDER\n2. ORDER STATUS\n3. ADMIN LOGIN\n4. EXIT\n");
		printf("enter choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: menu();
			break;
			case 2: create();
			break;	
		}
		
	}
	while(c!=4);
	
}

