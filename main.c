#include <stdio.h>

#define MAX_L 24
#define MAX_C 79

void printTable(char table[MAX_L][MAX_C]);

int main(int argc, int ** argv) {
	char table[MAX_L][MAX_C];
	int i, j;
	char corner = '+', horizontalEdge = '-', verticalEdge = '|';

	for (i = 0; i < MAX_L; i++)
		for (j = 0; j < MAX_C; j++) {
			if ((!i && !j) || (!i && j == MAX_C - 1) || (i == MAX_L - 1 && !j) || (i == MAX_L - 1 && j == MAX_C - 1))
				table[i][j] = corner;
			else 
				if ( !j || j == MAX_C - 1)
					table[i][j] = verticalEdge;
				else
					if (!i || i == MAX_L - 1)
						table[i][j] = horizontalEdge;
					else
						table[i][j] = ' ';			
		}
	
	printTable(table);

	return 0;
}

void printTable (char table[MAX_L][MAX_C]) {
	int i, j;
	for (i = 0; i < MAX_L; i++) {
		for (j = 0; j < MAX_C; j++)
			printf ("%c", table[i][j]);
		printf("\n");
	}
}
