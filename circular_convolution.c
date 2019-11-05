#include<stdio.h>

int main() {
	
	int k,n,N = 4;
	int x[] = {1,2,3,4};
	int h[] = {1,2,3,0};
	
	for(n=0; n<N; n++) {
		int sum = 0;
		for(k=0; k<N; k++) {
			if(n-k >= 0)
			sum += x[k]*h[n-k];
			else
			sum += x[k]*h[n-k+N];
		}
		printf("\ny[%d] = %d",n,sum);
	}
	getch();
	return 0;
}
