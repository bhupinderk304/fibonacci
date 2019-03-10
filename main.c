#include <stdio.h>
int main() {
	int xNm2 = 0;
	int xNm1 = 1;
	int xN;
	int n = 1;
	while(n < 20) {
		xN = xNm1 + xNm2;
		printf("%d\n", xN);
		n++;
		xNm2 = xNm1;
		xNm1 = xN;
	}
}