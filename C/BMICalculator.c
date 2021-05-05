#include<stdio.h>

/* Function Declaration */
float BMI(float meters, float kg);


//Main Function
int main(void){

	int feet;
	int inches;
	float cm;

	printf("What is your height in feet and inches?\n");
	scanf("%d", &feet);
	scanf("%d", &inches);

	//Converts feet and inches into centimeters
	cm = (inches * 2.54) + ((feet * 12) * 2.54);
	
	int pounds;
	float kilos;
	
	printf("What is your weight in lbs?\n");
	scanf("%d", &pounds);
	
	//Converts pounds to kilograms
	kilos = pounds / 2.2046;

	float ret;
	
	//Calls function BMI
	ret = BMI(cm, kilos);

	printf("Your BMI is %.1f\n", ret);
	
return 0;

}

//BMI Function
float BMI(float meters, float kg)
{
	float bmi;
	
	//Calculates BMI
	bmi = (kg /(meters*meters))*10000;

	if(bmi<18.5)
	{
	printf("Underweight ");
	}
	else if(18.5<bmi<25)
	{
	printf("Normal ");
	}
	else if(25<bmi<30)
	{
	printf("Overweight ");
	}
	else
	{
	printf("Obese ");
	}

	return bmi;
}

