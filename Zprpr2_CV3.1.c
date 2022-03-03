/*#include <stdio.h>
int parne(int x[], int pocetx, int y[]);
int main()
 {
	int x[7] = {4, 7, 1, 3, 2, 5, 6};
	int pocetx = 7;
	int y[7];
	int i, pocety = parne(x, pocetx, y);
	printf("pocety = %d\ny = {", pocety);
	for (i = 0; i < pocety; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", y[i]);
	}
	printf("}\n");
	return 0;
}
int parne(int x[], int pocetx, int y[]) {
	int i, pocety = 0, j = 0;
	for (i = 0; i < pocetx; i++) {
		if (x[i] % 2 == 0) {
			pocety += 1;
			y[j] = x[i];
			j++;
		}
	}
	return(pocety);
}
*/