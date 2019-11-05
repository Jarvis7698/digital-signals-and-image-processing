#include<stdio.h>
#include<math.h>

int main() {
	
	float static x[100], xReal[100], xImag[100];
	float N;
	int k,n;
	
	printf("\nLength of DFT: N = ");
	scanf("%f", &N);
	
	printf("\nFORMAT:\nx(k) = [real_part] [imag_part]\n");
	
	for(k=0; k<N; k++){
		printf("x(%d) = ", k);
		scanf("%f %f", &xReal[k], &xImag[k]);
	}
	
	for(n=0; n<N; n++) {
		x[n] = 0;
		for(k=0; k<N; k++) {
			x[n] += xReal[k]*cos((2*M_PI*k*n)/N) - xImag[k]*sin((2*M_PI*k*n)/N);
		}
		x[n] /= N;
	}
	
	printf("\nIDFT Sequence:");
	for (n=0; n<N; n++) {
		printf("\nx(%d) = %3.6f",n,x[n]);
	}
	
	getch();
	return 0;
}
