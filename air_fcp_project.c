#include<stdio.h>        
#include<stdlib.h>        
#include<conio.h>
#include<string.h>
#include<Windows.h>


struct mufti_airline 
{
	char passport[6];  
	char name[15];
	int seat_num;
	char email[15];
	struct mufti_airline *following;
}
*begin, *stream;
struct mufti_airline *dummy;
int flag = 0;
	int a=177;
	int b=60;
	int c=62;
	int d=153;
	int e=178;
	int i;

void main()    
{
	void reserve(int x), cancel(), display(), savefile();  //function prototypes
	int choice;
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	do
	{
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	printf("%c%c%c%c%c%c%c Home %c%c%c%c%c%c www.ukeyair.in             %c%c%c%c x %c%c",a,a,a,b,a,c,a,a,a,a,a,a,a,a,a,a,a,a,a);
	for(i=1;i<=32;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}                
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                   welcome to Ukey airline system                   ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to ask us");
		printf("\n\n\t\t Enter your choose ");



		scanf("%d", &choice); fflush(stdin);
		system("cls");  

		switch (choice)  
		{
		case 1:
			reserve(num); 
			num++;
			flag = 1;          
			break;      
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		{
				  savefile();
				  break;
		}
		Default:  
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch();     

	} while (choice != 4);     
}

void details()
{                      
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);

}

void details();

void reserve(int x) 
{
	stream = begin; 
	if (begin == NULL) 
	{
		// first user
		begin = stream = (struct mufti_airline*)malloc(sizeof(struct mufti_airline));     
 
		details();
		stream->following = NULL;  
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x; 
		return; 
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{                                     
		// next user                   
		while (stream->following)
			stream = stream->following;
		stream->following = (struct mufti_airline *)malloc(sizeof(struct mufti_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	
}


void savefile()                     
{
	FILE *fpointer = fopen("mufti records", "w"); 
                                                     
	if (!fpointer) 
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800); 
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);
		fprintf(fpointer, "%-15s", stream->name);
		fprintf(fpointer, "%-15s", stream->email);
		stream = stream->following;
	}
	fclose(fpointer);  
}

void display()      
{
	if(flag == 1)
	{
		stream = begin;
	    while (stream)
	    {
	    	printf("\n\n Passport Number : %-6s", stream->passport);
	    	printf("\n            name : %-15s", stream->name);
	    	printf("\n    email address: %-15s", stream->email);
	    	printf("\n      Seat number: A-%d", stream->seat_num);
	    	printf("\n\n++*=====================================================*++");
	    	stream = stream->following;     
	    }
	}
	else
	    printf("No records available!");

}

void cancel()
{
	stream = begin;     
	system("cls");
	char passport[6];
	printf("\n\n Enter passport number to delete record?:"); 
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);    
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)           
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);	
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");
}


// ************************************GOOD LUCK MUFTI**********************************

