#include<stdio.h>
void main(){
    float sensortemp,criticaltemp=100,threshold=80;
    printf("Enter your temp:");
    scanf("%f",&sensortemp);
    if (sensortemp<=threshold)
    {
        printf ("patient condition = normal");
    }
    else if (sensortemp>threshold&&sensortemp<=criticaltemp)
    {
        printf ("patient condition = warning");
    }
    else {
        printf ("patient condition = critical");
    }
}