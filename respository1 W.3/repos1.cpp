#include<stdio.h>
int main() {
	for (int x = 1; x <= 10000; x++) {
		int re = 0;
		for (int i = 1; i <= x; i++) {
			if (x % i == 0 && i != x) {
				re = re + i;
			}
			else if (x % i == 0 && i == 1) {
				re = re + i;
			}
		}
		if (re == x) {
			printf("%d ", re);
		}
	}
	return 0;
}