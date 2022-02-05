#include<stdio.h>
#include<conio2.h>
#define lenght 6

int main()
{
	int x, y, z, count = 0;
	
	// LIGHTRED, RED, YELLOW, LIGHTGREEN, LIGHTCYAN, MAGENTA
	int colors[lenght] = {12, 4, 14, 10, 11, 5};
	
	// Draw a pyramid
	for(x = 40, y = 2, z = x; y < 16; x--, z++, y++) 
	{
		gotoxy(x, y);
		printf("\333");
		gotoxy(z, y);
		printf("\333");
	}
	for( x = (x+1); x < z; x++) 
	{
		gotoxy(x, y);
		printf("\333");
	}
	
	textcolor(WHITE);
	gotoxy(1, 12);
	printf("\333");
	x = 2;
	for(y = 11; x != 37; y--) 
	{
		sleep(1);
		for(x = x, z = x; x != (z + 6) && x != 37; x++) 
		{
			gotoxy(x, y);
			printf("\333");
		}
        sleep(1000);	
	}

	do
	{
		z = 44;
		x = z + count;
		textcolor(colors[count]);
		
		for(y = (5 + count); x != 81; y++) 
		{
			for( ; x != (z + 6) && x <= 80; x++) 
			{
				gotoxy(x, y);
				printf("\333");
			}	
			z = x;
		}
		
		count++;
	} 
	while(count < 6);
	
	textcolor(WHITE);
	gotoxy(21, 20);
	printf("PINK FLOYD - THE DARK SIDE OF THE MOON");
	
	getch();
}
