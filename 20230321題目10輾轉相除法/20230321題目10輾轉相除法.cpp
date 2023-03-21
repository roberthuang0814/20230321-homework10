#include <stdlib.h>
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	while ((a %= b) && (b %= a));
	printf("%d\n", a + b);
}