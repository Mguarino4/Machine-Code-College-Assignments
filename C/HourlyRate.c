#include <stdio.h>

int main(void)
{
	float hours, rate, total;

	printf( "Enter hours worked: ");
	scanf("%f", &hours);

	printf( "Enter hourly payrate: ");
	scanf("%f", &rate);

	total = ( hours * rate);

	printf("Yor pay is: %.2f\n", total);
	return 0;

}
