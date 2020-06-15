#include <stdio.h>
#include <stdlib.h>

float aMinute = 60;//segundos
float aHour = 3600;//segundos
float aDay = 86400;//segundos
float aMonth = 2698400;//segundos
float aYear = 31449600;//segundos
float valor;

void gathering(){
    printf("Digite o Valor em SEGUNDOS !\n");
    scanf("%f",&valor);
}
float ToMinutes(){
    return (valor)/aMinute;
}
float ToHour(){
	return (valor)/aHour;
}
float ToDay(){
    return (valor)/aDay;
}
float ToMonth(){
    return (valor)/aMonth;
}
float ToYear(){
    return (valor)/aYear;
}
void display(){
	printf("Minutos: %f\n",ToMinutes());
	printf("Horas: %f\n",ToHour());
	printf("Dias: %f\n",ToDay());
	printf("Meses: %f\n",ToMonth());
	printf("Anos: %f\n",ToYear());
}


int main()
{
   gathering();
   display();
   return;
}
