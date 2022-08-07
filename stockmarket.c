#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int stock_quantity, client_id, brokerage = 45; 
 	int a=177;
	int b=60;
	int c=62;
	int d=153;
	int e=178;
	int i;
 float stock_price, total;
 char choice, stock_name[20], client_name[20];
 time_t t;
 time(&t);

	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	printf("%c%c%c%c%c%c%c Home %c%c%c%c%c%c www.ukeystockes.in         %c%c%c%c x %c%c",a,a,a,b,a,c,a,a,a,a,a,a,a,a,a,a,a,a,a);
	for(i=1;i<=32;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
printf("\n\n\t\tWelcome to UKey Stock Exchange");
printf("\n\nCompany Name\tHigh\t\tLow\t\tLast Price\tchg\tValue(Indian Rupee)");
printf("\n");
printf("\nTata Motors 	306.90\t\t278.35\t\t289.35\t\t-0.43\t9,365.55");
printf("\nBajaj Auto 	4,130.00	3,740.05	4,089.50	10.43	3,436.56");
printf("\nReliance 	2,115.35	2,035.15	2,049.60	-2.37	2,918.15");
printf("\nTata Steel 	675.80\t\t633.65\t\t647.00\t\t-2.95\t1,547.23	");
printf("\nBajaj Finance 	5,137.00	4,945.60	4,972.55	-2.85	1,558.69");
printf("\nApollo Tyres 	237.50\t\t219.00\t\t231.90\t\t 6.72\t1,511.23	");
printf("\nAxis Bank 	673.90\t\t638.80\t\t644.50\t\t-4.64\t1,391.50	");
printf("\nICICI Bank	553.50\t\t530.60\t\t533.80\t\t-3.42\t1,324.26");
printf("\nHDFC 		2,678.75\t2,583.05\t2,589.45\t-2.76\t1,315.44");
printf("\nInfosys 	1,356.00	1,326.55	1,340.85	 0.09	1,297.12");
printf("\nHero Motocorp 	3,483.95	3,258.90	3,374.90	 3.93	1,299.67");
printf("\nAsian Paints 	2,768.85	2,590.00	2,596.65	-4.41	1,323.07");
printf("\nSBI 		298.00\t\t282.40\t\t283.70\t\t-3.78\t1,285.63");
printf("\nBiocon 		423.00\t\t376.30\t\t393.75\t       -10.91\t1,143.76");
printf("\nBandhan Bank 	336.20\t\t311.85\t\t314.10\t\t-7.81\t1,143.21");
printf("\nHDFC Bank 	1,467.90	1,440.15	1,443.55	-2.12	1,119.33");
printf("\nIndusInd Bank 	934.00\t\t890.00\t\t893.30\t\t-3.52\t1,038.61");
printf("\nTCS 		3,325.00	3,241.90	3,303.10	 0.89	1,007.31");
printf("\nMaruti Suzuki 	8,308.00	8,000.00	8,048.85	-0.35	  957.52");
printf("\nEicher Motors 	3,037.00	2,900.00	2,972.60	 1.57	  926.19");
printf("\nAshok Leyland 	127.25\t\t19.85\t\t122.25\t\t 2.30\t  891.05	");
printf("\nMRF 		94,345.95	91,420.00	92,305.95	 0.65	  843.53");
printf("\nKotak Mahindra 	1,875.00	1,824.50	1,828.00	-1.60	  790.06	");
printf("\nBajaj Finserv 	9,213.50	8,965.20	9,071.00	 0.20	  763.09	");
printf("\nBharti Airtel 	585.55\t\t572.75\t\t576.85\t\t-0.77\t  720.46");
printf("\nSAIL 		65.35\t\t56.00\t\t58.20\t\t-10.25\t  724.81	");


 
 
 
 printf("\n\nEnter Client ID   : ");
 scanf("%d",&client_id);
 
 printf("Enter Client Name : ");
 scanf("%s",&client_name);
 
 printf("Enter Stock Name  : ");
 scanf("%s",&stock_name);

 printf("Enter Stock Quantity : ");
 scanf("%d", &stock_quantity);
 
 printf("Enter Stock Price    : ");
 scanf("%f", &stock_price);
 
 BACK:
  
 printf("Enter your choice (B for Buy, S for Sell):");
 scanf(" %c", &choice);
 
 if(choice!='B' && choice!='S')
 {
  printf("\n"); goto BACK;
 }
 
 total = stock_quantity * stock_price;
 
 printf("Collect Your Bill As Under...\n");
 
 printf("========================================\n");
 printf("      STOCK MARKET - CLIENT BILL\n");
 printf("      --------------------------\n");
 printf("Date and Time :%s",ctime(&t));
 printf("Client ID and Name : %d, %s\n",client_id, client_name);
 printf("----------------------------------------\n");
 printf("Stock Name\t\t : %s \n", stock_name);
 printf("Stock Quantity\t\t : %d\n", stock_quantity);
 printf("Stock Price\t\t : %0.2f\n", stock_price);
 printf("----------------------------------------\n");
 printf("Total Stock Transaction Amount = %0.2f\n", total);
 if(choice=='B')
  printf("You will pay us INR %0.2f.\n", total+brokerage);
 if(choice=='S')
  printf("We will pay you INR %0.2f.\n", total-brokerage);
 printf("========================================");
 
 return 0;
}
