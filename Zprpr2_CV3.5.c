#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, n;
	char *znaky;
	scanf("%d", &n);
	znaky = (char*)malloc(sizeof(char) * n);
	for (i = 0; i <= n; i++) {
		scanf("%c", &znaky[i]);
	}
	for (i = n; i > 0; i--) {
		printf("%c", znaky[i]);
	}
	free(znaky);
}