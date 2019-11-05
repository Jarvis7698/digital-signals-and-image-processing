#include<stdio.h>

int main() {
	int k,n,L = 4, M = 3;
	int x[] = {1,2,3,4};
	int h[] = {3,4,5};
	int N = L + M -1;
	
	for(n=0;n<M/2;n++) {
    	k = h[n];
    	h[n] = h[M-1-n];
    	h[M-1-n] = k;
  	}
	
	for(n=0; n<N; n++) {
		int sum = 0;
		for(k=0; k<L; k++) {
			if(n-k >= 0 && n-k < L)
			sum += x[k]*h[n-k];
		}
		printf("\ny[%2d] = %3d",n+1,sum);
	}
	getch();
	return 0;
}
