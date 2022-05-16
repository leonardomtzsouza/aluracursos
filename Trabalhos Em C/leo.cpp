#include <stdio.h>


int main() {

float ap1,ap2,aps;
int semestre;
printf("Digite sua nota de AP1\n");
scanf("%f%*c",&ap1);
printf("Digite sua nota de AP2\n");
scanf("%f%*c",&ap2);
printf("Digite sua nota de AS\n");
scanf("%f%*c",&aps);
printf("Digite seu semestre\n");
scanf("%d%*c",&semestre);
float media=ap1+ap2+aps;
printf("Sua média é:%.2f\n", media);