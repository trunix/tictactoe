#include <stdio.h>

void board()
{
	char numbers[9] = {
		'1','2','3',
		'4','5','6',
		'7','8','9',
	}
	

	printf("\n\n");
	printf("+--------+");
	printf("|%s|%s|%s|",numbers[0],numbers[1],numbers[2]);
}


