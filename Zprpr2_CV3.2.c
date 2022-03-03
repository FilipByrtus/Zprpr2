/*#include <stdio.h>
int nasobky(int x[], int pocetx, int y[], int k);
int main()
{
	int x[10] = { 4, 7, 10, 1, 3, 9, 2, 5, 8, 6 };
	int pocetx = 10;
	int y[10];
	int i, pocety = nasobky(x, pocetx, y, 2);
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

int nasobky(int x[], int pocetx, int y[], int k) {
	int i, pocety = 0, j = 0;
	for (i = 0; i < pocetx; i++) {
		if (x[i] % k == 0) {
			pocety += 1;
			y[j] = x[i];
			j++;
		}
	}
	return(pocety);

}*/
