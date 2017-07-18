#include<stdio.h>
float UsAL(int,int);
main(){

int taban=8,kuvvet=7;
printf("%d tabaninin %d. kuvveti:%f",taban,kuvvet,UsAL(taban,kuvvet));
scanf("%d %d",&taban,&kuvvet);
}
float UsAL(int t,int k){

float sonuc=1.0;
while(k!=0){
sonuc=sonuc*t;
k--;
}
return sonuc;
}
