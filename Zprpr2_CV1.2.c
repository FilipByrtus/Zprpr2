#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, i, j, k = 0, l;
	FILE* cvicenie;
	if ((cvicenie = fopen("cvicenie1p2.txt", "w")) == NULL) {
		printf("Subor nie je mozne otvorit.");
		return(0);
	}
	scanf("%d", &n);
	j = n;
	l = n;
	if ((n < 1) || (n > 15)) {
		printf("Cislo nie je z daneho intervalu");
		return(0);
	}
	else {
		for (i = 1; i <= n; i++) {
			printf("%d:", i);
			for (j=l; j > k; j--) {
				printf(" %d", j);
			}
			printf("\n");
			l--;
		}
		l = n;
		for (i = 1; i <= n; i++) {
			fprintf(cvicenie, "%d:", i);
			for (j = l; j > k; j--) {
				fprintf(cvicenie, " %d", j);
			}
			fprintf(cvicenie, "\n");
			l--;
		}
	}
	fclose(cvicenie);
}