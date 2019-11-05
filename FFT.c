#include <stdio.h>
#include<math.h>

int main(void) {
  int n=8,i,j;
  int MAX = 20;
  double xr[MAX],xi[MAX];
  double XR[MAX],XI[MAX];
  double AR[MAX],AI[MAX];
  double BR[MAX],BI[MAX];
  double CR[MAX],CI[MAX];
  double DR[MAX],DI[MAX];
  double ER[MAX],EI[MAX];
  double FR[MAX],FI[MAX];
  double GR[MAX],GI[MAX];
  double HR[MAX],HI[MAX];
  double YR[MAX],YI[MAX];
   
  printf("\nFORMAT:\nx(k) = [real_part] [imag_part]\n");
  for(i=0;i<n;i++) {
  	printf("x(%d) = ", i);
    scanf("%lf %lf",&xr[i],&xi[i]);
  }

  for(i=0;i<=2;i=i+2) {
    AR[i]=xr[i]+xr[i+4];
    AI[i]=xi[i]+xi[i+4];
    AR[i+1]=xr[i]-xr[i+4];
    AI[i+1]=xi[i]-xi[i+4];
    
    BR[i]=xr[i+1]+xr[i+5];
    BI[i]=xi[i+1]+xi[i+5];
    BR[i+1]=xr[i+1]-xr[i+5];
    BI[i+1]=xi[i+1]-xi[i+5];
  }

  for(i=0;i<=2;i++) {
    CR[i]=AR[i];
    CI[i]=AI[i];
    DR[i]=BR[i];
    DI[i]=BI[i];
  }

  CI[3]=-AR[3];
  CR[3]=0;
  DI[3]=-BR[3];
  DR[3]=0;

  for(i=0;i<=1;i++) {
    ER[i]=CR[i]+CR[i+2];
    EI[i]=CI[i]+CI[i+2];
    ER[i+2]=CR[i]-CR[i+2];
    EI[i+2]=CI[i]-CI[i+2];
  
    FR[i]=DR[i]+DR[i+2];
    FI[i]=DI[i]+DI[i+2];
    FR[i+2]=DR[i]-DR[i+2];
    FI[i+2]=DI[i]-DI[i+2];
  }

  for(i=0;i<=3;i++) {
    GR[i]=ER[i];
    GI[i]=EI[i];
  }

  HR[0]=FR[0];
  HI[0]=FI[0];
  HR[1]=0.707*FR[1]+0.707*FI[1];
  HI[1]=0.707*FI[1]-0.707*FR[1];
  HR[2]=0;
  HI[2]=-FR[2];
  HR[3]=-0.707*FR[3]+0.707*FI[3];
  HI[3]=-0.707*FI[3]-0.707*FR[3];
  
  for(i=0;i<=3;i++) {
    XR[i]=GR[i]+HR[i];
    XI[i]=GI[i]+HI[i];
    YR[i]=GR[i]-HR[i];
    YI[i]=GI[i]-HI[i];
  }
  
  printf("\nReal Part \t\t Imaginary Part\n");
  for(i=0;i<4;i++) {
    printf("\n%2.6lf \t\t %2.6lf",XR[i],XI[i]);
  }
  for(i=0;i<4;i++) {
    printf("\n%2.6lf \t\t %2.6lf",YR[i],YI[i]);
  }
  
  getch();
  return 0;
}
