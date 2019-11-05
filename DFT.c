#include<stdio.h>
#include<math.h>

int main() {

	float static x[100], xReal[100], xImag[100];
	int k,n;
	float N;
	
	printf("Number of Samples: N = ");
	scanf("%f", &N);
	
	printf("\nSequence: \n");
	for(n=0; n<N; n++) {
		printf("x(%d) = ",n);
		scanf("%f",&x[n]);
	}
	
	for(k=0; k<N; k++) {
		xReal[k] = xImag[k] = 0;
		for(n=0; n<N; n++) {
			xReal[k] += x[n]*cos((2*M_PI*k*(n-N))/N);
			xImag[k] += x[n]*sin((2*M_PI*k*(n-N))/N);
		}
		xImag[k] *= -1;
	}
	
	printf("\n%d point DFT Sequence:\n",N);
	printf("\nFORMAT:\nx(k) =\t[real_part]\t[imag_part]");
	
	for(k=0; k<N; k++) {
		printf("\nx(%d) =\t%3.6f \t%3.6f", k, xReal[k], xImag[k]);
	}
	
	getch();
	return 0;
}
