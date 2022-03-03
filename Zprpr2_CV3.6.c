#include<stdlib.h>
#include<stdio.h>

int main() {
	int pocet[25];
	char pismena[25] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', };
	char fileName[50];
	FILE* vstup;
	scanf("%s^\n", fileName);
	vstup = fopen(fileName, "r");

}