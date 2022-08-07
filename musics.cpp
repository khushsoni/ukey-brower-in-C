#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int num;
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
	printf("%c%c%c%c%c%c%c Home %c%c%c%c%c%c www.ukeymusics.in          %c%c%c%c x %c%c",a,a,a,b,a,c,a,a,a,a,a,a,a,a,a,a,a,a,a);
	for(i=1;i<=32;i++)
	{ 
		printf("%c",a);
		
	}
	printf("\n");
	for(i=1;i<=88;i++)
	{ 
		printf("%c",a);
		
	}
   	
   	printf("\n\n Welcome to Ukey Music\n One stop Platform for all musics:");
	printf("\n\n\n 1: O betaji");
	printf("\n 2: Chhogada");
	printf("\n 3: Tujhe Dekha To");
	printf("\n 4: Dhadak Title Track");
	printf("\n 5: Justified");
	printf("\n 6: Mehrama");
	printf("\n 7: Naach Meri Rani");
	printf("\n 8: BurjKhalifa");
	printf("\n 9: Kalank - Title Track");
	printf("\n 10: Ole Ole 2");
	printf("\n 11: Short Theme Song");
	printf("\n 12: Jadu Teri Nazar");	
	printf("\nEnter Number: ",num);
	scanf("%d",&num);
	switch(num)
	{
	
    case 1:	PlaySound("obeta.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
	case 2: PlaySound("chogada.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
	case 3: PlaySound("Tujhe Dekha To.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
    case 4:	PlaySound("Dhadak-Title Song.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
    case 5:	PlaySound("justified.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
    case 6:	PlaySound("Mehrama.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
    case 7:	PlaySound("Naach Meri Rani.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;			
    case 8:	PlaySound("BurjKhalifa - Laxmmi Bomb.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;			
    case 9:	PlaySound("Kalank.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
    case 10:PlaySound("Ole Ole 2.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
	case 11:PlaySound("GTAV.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
	case 12:PlaySound("Jadu Teri Nazar.wav",NULL,SND_FILENAME);
			system("PAUSE");    
			break;
			
	default:printf("Enter valid number");
		 	break;
	}
	printf("Enter (Y/y) to listen to another Song: ");
	yn=getch();
   }while(yn=='Y'||yn=='y');
   
    return 0;
}
