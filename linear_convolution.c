#include<stdio.h>

int main() {
	int k,n,L = 4, M = 3;
	int x[] = {2,4,6,8};
	int h[] = {1,2,3};
	int N = L + M -1;
	
	for(n=0; n<=N; n++) {
		int sum = 0;
		for(k=0; k<L; k++) {
			if(n-k >= 0 && n-k < L)
			sum += x[k]*h[n-k];
		}
		printf("\ny[%d] = %d",n,sum);
	}
	getch();
	return 0;
}
