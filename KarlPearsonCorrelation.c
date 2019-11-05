#include<stdio.h>
#include<math.h>

int main() {
	
	int x[] = {174,175,176,177,178,182,183,186,189,193};
	int y[] = {61,65,67,68,72,74,80,87,92,95};
	int i,n=10;
	int sumx=0, sumy=0, sumx2=0, sumy2=0, sumxy=0;
	float r;
	
	printf("X\tY\tX.Y\tX^2\tY^2\n");
	for(i=0; i<n; i++) {
		sumx += x[i];
		sumy += y[i];
		sumx2 += pow(x[i],2);
		sumy2 += pow(y[i],2);
		sumxy += x[i]*y[i];
		printf("\n%d\t%d\t%d\t%.0f\t%.0f",x[i],y[i],x[i]*y[i],pow(x[i],2),pow(y[i],2));	
	}
	printf("\nSummation\n%d\t%d\t%d\t%d\t%d\n",sumx,sumy,sumxy,sumx2,sumy2);
	
	//Karl's Correlation Formula
	r = ( n*sumxy - sumx * sumy) / (sqrt(n*sumx2 - pow(sumx,2)) * sqrt(n*sumy2 - pow(sumy,2)));
	printf("\nKarl's Correlation: %f", r);
	
	getch();
	return 0;
}
