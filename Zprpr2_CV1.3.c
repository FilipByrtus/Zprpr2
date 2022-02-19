#include <stdio.h>
#include <stdlib.h>

void mocnina(double x, int n);

int main() {
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    mocnina(x, n);
}
void mocnina(double x, int n) {
    int i, j;
    double z;
    z = x;
    for (i = 1; i <= n; i++) {
        printf("%.2lf^%d = %.2lf \n", x, i, z);
        z = z * x;
    }
}