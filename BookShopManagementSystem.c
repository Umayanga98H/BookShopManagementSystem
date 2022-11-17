#include<stdio.h>

void main()
{
int num;
num=1,2,3,4,5;
int store_2=150;    //store level of novels
int store_1=200;   //store level of Translation books
int store_3=500;   //store level of CR books and Exercise books
int store_4=250;   //store level of School text books 
int store_5=250;    //store level of Other books
int store_count;    //remaining count of books after issues
int number; //customer expection from each cateogries       
int type[5]; //five categories of books
int totalbooks;

printf("Novels:1\n");
printf("Translation books:2\n");
printf("CR books and Exercise books:3\n");
printf("School text books:4\n");
printf("Other books:5\n");
	  
while(num<5)
{
printf("Please enter your selection:");
scanf("%d",&num);

switch(num)
 {
	case 1 :
	
	    printf("***Welcome to the Novel section***\n\n");
		printf("Numbers of book that you want:");
		scanf("%d",&number);
		
		if(store_1>=number)
		{
			if(store_1>number)
				
	       {
		    store_count=store_1-number;
		    printf("Store count of Novels:%d\n",store_count);
			printf("Collect your order from counter\n\n");
		   }
		   else
		   {
			store_count=store_1-number;
			printf("Collect your order from counter\n");
			printf("Store count of Novels:%d\n",store_count);
			printf("****Warning, store_1 is over****\n\n");
		   }
		}
		else
		{
         printf("Sorry we have not enough store\n\n");
		}
		break;
		
    case 2 :
	
		printf("***welcome to the Translation book section***\n\n");
		printf("Numbers of book that you want:");
		scanf("%d",&number);
		
		if(store_2>=number)
		{
			if(store_2>number)
	       {
		    store_count=store_2-number;
		    printf("Store count of Translation books:%d\n",store_count);
			printf("Collect your order from counter\n\n");
		   }
		   else
		   {
			store_count=store_2-number;
			printf("Collect your order from counter\n");
			printf("Store count of Translation books:%d\n",store_count);
			printf("****Warning, store_2 is over****\n\n");
		   }
		}
		else
		{
         printf("Sorry we have not enough store\n\n");
		}
		break;
		
	case 3 :
	
		printf("***welcome to the CR books and Exercice books section***\n");
		printf("Numbers of book that you want:");
		scanf("%d",&number);
		
		if(store_3>=number)
		{
			if(store_3>number)
	       {
		    store_count=store_3-number;
		    printf("Store count of CR books and Exercice books:%d\n",store_count);
			printf("Collect your order from counter\n\n");
		   }
		   else
		   {
			store_count=store_3-number;
			printf("Collect your order from counter\n");
			printf("Store count of CR books and Exercice books:%d\n",store_count);
			printf("****Warning, store_3 is over****\n\n");
		   }
		}
		else
		{
         printf("Sorry we have not enough store\n\n");
		}
		break;
		
	case 4 :
	
		printf("***welcome to the School text books***\n\n");
		printf("Numbers of book that you want:");
		scanf("%d",&number);
		
		if(store_4>=number)
		{
			if(store_4>number)
	       {
		    store_count=store_4-number;
		    printf("Store count of School text books :%d\n",store_count);
			printf("Collect your order from counter\n\n");
		   }
		   else
		   {
			store_count=store_4-number;
			printf("Collect your order from counter\n");
			printf("Store count of School text books :%d\n",store_count);
			printf("****Warning, store_4 is over****\n\n");
		   }
		}
		else
		{
         printf("Sorry we have not enough store\n\n");
		}
		break;
		
	case 5 :
	
		printf("***welcome to the Other books section***\n\n");
		printf("Numbers of book that you want:");
		scanf("%d",&number);
		
		if(store_5>=number)
		{
			if(store_5>number)
	       {
		    store_count=store_5-number;
		    printf("Store count of Other books:%d\n",store_count);
			printf("Collect your order from counter\n");
		   }
		   else
		   {
			store_count=store_5-number;
			printf("Collect your order from counter\n");
			printf("Store count of Other books:%d\n",store_count);
			printf("****Warning, store_5 is over****\n\n");
		   }
		}
		else
		{
         printf("Sorry we have not enough store\n\n");
		}
		break;
		
		default:
		printf("Your selection not in defined,Check the cateogry list above\n\n");
}	
}
for(int i=0;i<5;i++);
	  {
	  printf("Numbers of Novel you collected from counter:");
	  scanf("%d",&type[0]);
	  printf("Numbers of Translation book you collected from counter:");
	  scanf("%d",&type[1]);
	  printf("Numbers of CR books and Exercise books you collected from counter:");
	  scanf("%d",&type[2]);
	  printf("Numbers of School text books you collected from counter:");
	  scanf("%d",&type[3]);
	  printf("Numbers of Other books you collected from counter:");
	  scanf("%d",&type[4]);
 }
 totalbooks=type[0]+type[1]+type[2]+type[3]+type[4];
 printf("Total books to bill:%d\n",totalbooks);
 
 if(totalbooks>200)
 {
	 printf("Free of charge delivary\nThanks for visiting us!!!!\n");
 }
 else
 {
	 printf("Hope to see you again\nThanks for visiting us!!!!\n");
 }
}
