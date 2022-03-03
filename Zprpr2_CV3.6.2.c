#include<stdlib.h>
#include<stdio.h>

int main() {
	int pocet[26], i, j, f = 1;
	char fileName[50], loadedChar;
	FILE* vstup;
	scanf("%s^\n", fileName);
	vstup = fopen(fileName, "r");
	for (i = 0; i < 26; i++) {
		pocet[i] = 0;
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", i + 65);
	}
	printf("\n");
	do {
		while (f) {
			loadedChar = getc(vstup);
			if (loadedChar <=90 && loadedChar >= 65) {
				pocet[loadedChar - 65] += 1;
			}
			else if (loadedChar <= 122 && loadedChar >= 97) {
				pocet[loadedChar - 97] += 1;
			}
			if (loadedChar == '\n' || loadedChar == EOF) {
				for (i = 0; i < 26; i++) {
					if (pocet[i] > 9) {
						if (pocet[i] > 99) pocet[i] = 99;
						printf("%d", pocet[i]);
					}
					if (pocet[i] < 10) {
						printf("%d ", pocet[i]);
					}
				}
				printf("\n");
				for (i = 0; i < 26; i++) {
					pocet[i] = 0;
				}
				if (loadedChar == EOF) break;
			}
		}
	} while (loadedChar != EOF);

}