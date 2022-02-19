#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, * d, i, j;
	scanf_s("%d", &n);
	if (n < 0 || n > 10) {
		printf("Postupnost nieje spravna");
		return(0);
	}
	d = (int*) malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf_s("%d", d + i);
	}
	for (i = 1; i < n; i++) {
		j = i - 1;
		if (d[i] > (d[j] * 2) || d[i] < (d[j] / 2)) {
			printf("Postupnost nieje spravna");
			return(0);
		}
	}
	printf("Postupnost je spravna");
}
