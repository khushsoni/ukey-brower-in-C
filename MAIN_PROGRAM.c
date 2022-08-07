#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a=177;
	int b=60;
	int c=62;
	int d=153;
	int e=178;
	int i;
	char yn;
	
	do
	{
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	printf("%c%c%c%c%c%c%c Home %c%c%c%c%c%c www.ukeybrower.in          %c%c%c%c x %c%c",a,a,a,b,a,c,a,a,a,a,a,a,a,a,a,a,a,a,a);
	for(i=1;i<=32;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n\n\t");
	printf("WELCOME to UKey Browser");
	printf("\n\n\tA Browser which drive the WORLD at your Fingertips !!");
	printf("\n\n");
	printf("\n\n\tSEARCH Ukey....... ");
	printf("\n\n\n\t%c%c 1 Online Shopping",e,e);
	printf("\n\n\t%c%c 2 Media",e,e);
	printf("\n\n\t%c%c 3 Money and Services",e,e);
	printf("\n\n\t%c%c 4 Travel and Transport",e,e);
	printf("\n\n\t%c%c 5 Food and Drink\n\n",e,e);
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
	
	int choice;

	
	printf("\n\tMaximum the screen to experience better");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
		    system("online_shopping.exe");
		    break;
		 
		case 2:
		    system("ProjectLatest.exe");
		    break;
			    
		case 3:
		    printf("\n\t%c%c 1 Online Banking\n\n",e,e);
			printf("\t%c%c 2 Stock market\n\n",e,e);
			
			int choice2;
	        printf("Enter your choice: ");
	        scanf("%d", &choice2);
	        
	        switch (choice2)
	        {
	        	case 1:
	        		system("bank.exe");
		            break;
		            
		        case 2:
	        	    system("stockmarket.exe");
		            break;
		            
			}
			break;
		    
		case 4:
		
			printf("\t%c%c 1 Flight ticket_booking\n\n",e,e);
			printf("\t%c%c 2 Tourism Management\n\n",e,e);
			
			int choice1;
	        printf("Enter your choice: ");
	        scanf("%d", &choice1);
	        
	        switch (choice1)
	        {
	        	case 1:
	        		system("air_fcp_project.exe");
		            break;
		            
		        case 2:
	        		system("TourismManagement.exe");
		            break;
			}
			break;    
	    
	    case 5:	system("online_food_order.exe");
		    	break;
			
		    
		default:
			printf("Enter Valid Choice ");
		    
		
	}
	printf("\nEnter (Y/y) to Go to Home Page: ");
	yn=getch();
   }while(yn=='Y'||yn=='y');
	
	return 0;
}
