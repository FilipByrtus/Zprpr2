#include<stdio.h>
#include<stdlib.h>


int main() {
	FILE* file;
	int i = 0, j;
	char znak;
	if ((file = fopen("text.txt", "r")) == NULL) {
		printf("Subor nie je mozne otvorit.");
		return(0);
	}
	do {
		znak = getc(file);
		if (znak == 88 || znak == 120) {
			printf("Precital som X\n");
		}
		else if (znak == 89 || znak == 121) {
			printf("Precital som Y\n");
		}
		else if (znak == 35 || znak == 36 || znak == 38) {
			printf("Precital som riadiaci znak\n");
		}
		else if (znak == 32) {
			i++;
		}
		else if (znak == 42) {
			printf("Koniec\n");
			break;
		}
	} while (znak != EOF);
	printf("Pocet precitanych medzier: %d\n", i);
}