/*#include<stdlib.h>
#include<stdio.h>

int main() {
	int pocet[26], i, j, f = 1;
	char pismenaMale[26];
	char pismenaVelke[26];
	char fileName[50], loadedChar;
	FILE* vstup;
	scanf("%s^\n", fileName);
	vstup = fopen(fileName, "r");
	for (i = 0; i < 26; i++) {
		pismenaMale[i] = i + 97;
		pismenaVelke[i] = i + 65;
		pocet[i] = 0;
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", pismenaVelke[i]);
	}
	printf("\n");
	do{
		while (f) {
			loadedChar = getc(vstup);
			for (i = 0; i < 26; i++) {
				if (loadedChar == pismenaMale[i] || loadedChar == pismenaVelke[i]) {
					pocet[i] += 1;
				}
			}
			if (loadedChar == '\n'|| loadedChar == EOF) {
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
	}while (loadedChar != EOF);

}*/
