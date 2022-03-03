/*#include <stdio.h>
int delitele(int x[], int pocetx, int y[], int k);
int main(){
	int x[10] = { 4, 7, 10, 2, 3, 9, 6, 5, 8, 12 };
	int pocetx = 10;
	int y[10];
	int i, pocety = delitele(x, pocetx, y, 24);
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

int delitele(int x[], int pocetx, int y[], int k){
	int i, pocety = 0, j = 0;
	for (i = 0; i < pocetx; i++) {
		if (k % x[i] == 0) {
			pocety += 1;
			y[j] = x[i];
			j++;
		}
	}
	return(pocety);

}
*/