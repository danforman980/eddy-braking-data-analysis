#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(void) {
  double al01a[70000][2];
  int al01na[70000][2];
  int i;
  FILE *al01;
  al01 = fopen("al01.csv","r");
  char buffer[100];
  fgets(buffer, 100, al01);
  fgets(buffer, 100, al01);
  for(i=0;i<70000;i=i+1){
    fscanf(al01,"%lf,%lf", &al01a[i][0], &al01a[i][1]);
    if (al01a[i][1]==0){
      break;
    }
  }
  fclose(al01);
  FILE *al01n;
  al01n = fopen("al01n.csv","w");
  for(i=0;i<70000;i=i+1){
    if (al01a[i][1]==0){
      break;
    }
    else if (al01a[i][1]<20){
      if(al01a[i-1][1]<20){
      }
      else{
        al01na[i][1]=1;
        al01na[i][0]=i;
        fprintf(al01n,"%i\n", i);
      }
    }
  }
  fclose(al01n);
  int j;
  int array[70000];
  FILE *ral;
  ral = fopen("al01n.csv","r");
  for (j=0; j<70000;j=j+1){
    fscanf(ral,"%i", &array[j]);
      if (array[j]==0){
      break;
    }
  }
  fclose(ral);
  int k;
  k=j;
  FILE *al012;
  al012 = fopen("al012.csv","w");
  for (j=1; j<k;j=j+1){
    fprintf(al012,"%i\n", array[j]-array[j-1]);
  }
  fclose(ral);

  int array2[70000];
  FILE *ral2;
  ral2 = fopen("al012.csv","r");
  for (j=0; j<70000;j=j+1){
    fscanf(ral2,"%i", &array2[j]);
    if (array2[j]==0){
      break;
    }
  }

  int array3[70000];
  k=j;
  int q;
  q=0;
  double per;
  per=0.2;
  for(j=k-1; j>-1;j=j-1){
    if (array2[j+1] > array2[j]/2 - per*array2[j+1] && array2[j+1] < array2[j]/2 + per*array2[j+1]){
      array2[j]=array2[j]/2;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      q=q+2;

    }
    else if (array2[j+1] > array2[j]/3 - per*array2[j+1] && array2[j+1] < array2[j]/3 + per*array2[j+1]){
      array2[j]=array2[j]/3;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      q=q+3;
    }
    else if (array2[j+1] > array2[j]/4 - per*array2[j+1] && array2[j+1] < array2[j]/4 + per*array2[j+1]){
      array2[j]=array2[j]/4;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      q=q+4;
    }
    else if (array2[j+1] > array2[j]/5 - per*array2[j+1] && array2[j+1] < array2[j]/5 + per*array2[j+1]){
      array2[j]=array2[j]/5;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      q=q+5;
    }
      else if (array2[j+1] > array2[j]/6 - per*array2[j+1] && array2[j+1] < array2[j]/6 + per*array2[j+1]){
      array2[j]=array2[j]/6;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      q=q+6;
    }
      else if (array2[j+1] > array2[j]/7 - per*array2[j+1] && array2[j+1] < array2[j]/7 + per*array2[j+1]){
      array2[j]=array2[j]/7;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      q=q+7;
      }
      else if (array2[j+1] > array2[j]/8 - per*array2[j+1] && array2[j+1] < array2[j]/8 + per*array2[j+1]){
      array2[j]=array2[j]/8;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      q=q+8;
    }
      else if (array2[j+1] > array2[j]/9 - per*array2[j+1] && array2[j+1] < array2[j]/9 + per*array2[j+1]){
      array2[j]=array2[j]/9;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      q=q+9;
    }
      else if (array2[j+1] > array2[j]/10 - per*array2[j+1] && array2[j+1] < array2[j]/10 + per*array2[j+1]){
      array2[j]=array2[j]/10;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      q=q+10;
    }
      else if (array2[j+1] > array2[j]/11 - per*array2[j+1] && array2[j+1] < array2[j]/11 + per*array2[j+1]){
      array2[j]=array2[j]/11;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      q=q+11;
    }
      else if (array2[j+1] > array2[j]/12 - per*array2[j+1] && array2[j+1] < array2[j]/12 + per*array2[j+1]){
      array2[j]=array2[j]/12;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      q=q+12;
    }
      else if (array2[j+1] > array2[j]/13 - per*array2[j+1] && array2[j+1] < array2[j]/13 + per*array2[j+1]){
      array2[j]=array2[j]/13;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      q=q+13;
    }
      else if (array2[j+1] > array2[j]/14 - per*array2[j+1] && array2[j+1] < array2[j]/14 + per*array2[j+1]){
      array2[j]=array2[j]/14;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      q=q+14;
    }
      else if (array2[j+1] > array2[j]/15 - per*array2[j+1] && array2[j+1] < array2[j]/15 + per*array2[j+1]){
      array2[j]=array2[j]/15;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      q=q+15;
    }
      else if (array2[j+1] > array2[j]/16 - per*array2[j+1] && array2[j+1] < array2[j]/16 + per*array2[j+1]){
      array2[j]=array2[j]/16;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      array3[q+15]=array2[j];
      q=q+16;
      }
      else if (array2[j+1] > array2[j]/17 - per*array2[j+1] && array2[j+1] < array2[j]/17 + per*array2[j+1]){
      array2[j]=array2[j]/17;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      array3[q+15]=array2[j];
      array3[q+16]=array2[j];
      q=q+17;
      }
      else if (array2[j+1] > array2[j]/18 - per*array2[j+1] && array2[j+1] < array2[j]/18 + per*array2[j+1]){
      array2[j]=array2[j]/18;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      array3[q+15]=array2[j];
      array3[q+16]=array2[j];
      array3[q+17]=array2[j];
      q=q+18;
      }
      else if (array2[j+1] > array2[j]/19 - per*array2[j+1] && array2[j+1] < array2[j]/19 + per*array2[j+1]){
      array2[j]=array2[j]/19;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      array3[q+15]=array2[j];
      array3[q+16]=array2[j];
      array3[q+17]=array2[j];
      array3[q+18]=array2[j];
      q=q+19;
      }
      else if (array2[j+1] > array2[j]/20 - per*array2[j+1] && array2[j+1] < array2[j]/20 + per*array2[j+1]){
      array2[j]=array2[j]/20;
      array3[q]=array2[j];
      array3[q+1]=array2[j];
      array3[q+2]=array2[j];
      array3[q+3]=array2[j];
      array3[q+4]=array2[j];
      array3[q+5]=array2[j];
      array3[q+6]=array2[j];
      array3[q+7]=array2[j];
      array3[q+8]=array2[j];
      array3[q+9]=array2[j];
      array3[q+10]=array2[j];
      array3[q+11]=array2[j];
      array3[q+12]=array2[j];
      array3[q+13]=array2[j];
      array3[q+14]=array2[j];
      array3[q+15]=array2[j];
      array3[q+16]=array2[j];
      array3[q+17]=array2[j];
      array3[q+18]=array2[j];
      array3[q+19]=array2[j];
      q=q+20;
    }
    else{
      array2[j]=array2[j];
      array3[q]=array2[j];
      q++;
    }
  }


  int array4[70000];
  array4[0]=array3[q];
  for (i=1;i<70000;i++){
    array4[i]=array4[i-1]+array3[q-i];
  }


  FILE *al013;
  al013 = fopen("al013.csv","w");
  for (j=0; j<q+1;j=j+1){
    fprintf(al013,"%i,%i\n", array4[j],array3[q-j]);
  }
  fclose(al013);


  double pow(double x, double y);
  double μ;
  μ=1.2566*pow(10,-6);
  /*Known permeability of vacuum (kgms-2A-2)*/
  double Di;
  Di=0.305;
  /*Known diameter of the disc (m)*/
  double A;
  A=0.5*Di;
  /*Known radius of the disc (m)*/
  double r1;
  r1=0.140;
  /*distance from centre of disc to centre of pole (m)*/
  double D;
  D=0.012;
  /*diameter of the soft iron pole of the electromagnet (m)*/
  double ξ; 
  ξ=1;
  /*Known ratio of zone width"*/
  double p; 
  p=2.65*pow(10,-8);
  /*Known specific resistance (Ωm)*/
  double d;
  d=0.00206;
  /*Known disc thickness (m)*/
  double x;
  x=0.012;
  /*Known air gap between pole faces (m)*/
  double B;
  B=0.02804;
  /*Known magnetic field strength (T)*/

  double M;
  M=0.4074;
  /*Known mass of the disk (kg)*/

  double I;
  I=0.5*M*A*A;
  /*Inertia*/
  printf("I %.15f\n",I);
  
  double ts;
  ts=0.0016;
  /*Time step (s)*/
  
  
  double σ;
  σ=1/p;
  /*specific conductivity (1/Ωm)*/

  double θ;
  θ=34.7222222222222;
  /*initial angular velocity*/
  
  double θi;
  θi=34.7222222222222;
  
  double c;
  c=0.5*(1-1/4*(1/(pow((1+r1/A),2)*(pow(((A-r1)/D),2)))));
  
  j=0;
  FILE *al014;
  al014 = fopen("al013.csv","r");
  int al014a[70000][2];
  for(i=0;i<70000;i=i+1){
    fscanf(al014,"%i,%i", &al014a[i][0], &al014a[i][1]);
  }
  fclose(al014);
  
  double Aa;
  Aa=0.25*(PI/p)*pow(D,2)*d*c*A*A*pow(B,2);
  printf("Aa %.15f\n",Aa);

  double Mc;
  Mc=0.000245062;

  double MAa;
  MAa=Aa+Mc;

  double N;
  N=-5.96835890365437E-06;

  double NMAa;
  NMAa=N/MAa;
  
  double IMAa;
  IMAa=-MAa/I;


  for (i=0;i<60000;i++){
    if(i==al014a[j][0]){
      printf("%f\n",θ);
      j=j+1;
    }
    double t;
    t=i*ts;
    double exp(double x);
    /*θ=(θi+NMAa)*exp(IMAa*t)-NMAa;*/
    θ=(θi)*exp(IMAa*t);
  }

  return 0;
}