#include <stdio.h>
int main(){
	int temp, hora, min;
	scanf("%d", &temp);
	hora=temp/3600;
	temp=temp%3600;
	min=temp/60;
	temp=temp%60;
	printf("horas: %d\n", hora);
	printf("minutos: %d\n", min);
	printf("segundos: %d\n", temp);

}

