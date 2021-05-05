#include <stdio.h>

int main(void)
{
	//Initializes Variables
	float celcius, fahrenheit;

	//Takes user input
	printf( "Enter the temperature in celcius :");
	scanf("%f", &celcius);

	//Mathematical Formula
	fahrenheit = (celcius * (9/5)) + 32;

	//Printout
	printf("The temperature in fahrenheit %.2f\n", fahrenheit);
	return 0;

}
