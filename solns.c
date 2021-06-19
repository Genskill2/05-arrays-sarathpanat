#include <stdio.h>

float average(int a[],int num){
  int avg=0;
  for (int i=0;i<num;i++)
      avg += a[i];
  avg=avg/num;
  return avg;
}

int factors(int num,int a[]){
  int fact=0;
  for(int i=2;i<=num;i++){
      while(num%i==0){
        num=num/i;
        a[fact] = i;
        fact ++;
      }
  }
  return fact;
}

int max(int a[],int num){
  int max= 0;
  for (int i=0;i<num;i++){
    if(max < a[i])
      max=a[i];
  }
  return max;
}

int min(int a[],int num){
  int i=0
  int min=a[i];
  for(i;i<num;i++){
    if(a[i]<min)
      min=a[i];
  }
  return min;
}

int mode(int a[],int num){
  int temp1,temp2=0,mode;
  for(int i=0;i<num;i++){
    temp1 =0;
    for(int j=0;j<num;j++){
      if(a[i] ==a[j])
        temp1++;
    }
    if(temp2<temp1)
      mode =a[i];
    temp2=temp1;  
    }
    return(mode);
}
