#include<stdio.h>
#include<stdlib.h>

long reverzne_cislo(long x);

int main() {
	int n, reverzne;
	scanf("%d", &n);
	reverzne = reverzne_cislo(n);
	printf("%d \n", reverzne);
	if (n == reverzne) {
		printf("Cislo %d je palindrom", n);
	}
	if (n != reverzne) {
		printf("Cislo %d nie je palindrom", n);
	}
}
long reverzne_cislo(long x) {
	int zvysok, cislo = 0;
	while (x != 0) {
		zvysok = x % 10;
		cislo = cislo * 10 + zvysok;
		x = x / 10;
	}
	return(cislo);
}