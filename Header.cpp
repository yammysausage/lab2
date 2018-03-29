#include<iostream>
#include<string>
#include"Header.h"
using namespace std;
float bmi::BMI(float tall, float mass) {
	float bmi2;
	bmi2 = mass*10000/ (tall*tall) ;
	return bmi2;

}
string bmi::rank(float bmi1)
{
	if (bmi1 < 15)
		return"very severly underweight";
	if (bmi1 >= 15 && bmi1 < 16)
		return"severly underweight";
	if (bmi1 >= 16 && bmi1 < 18.5)
		return"underweight";
	if (bmi1 >= 18.5&&bmi1 < 25)
		return"normal";
	if (bmi1 >=  25&&bmi1 < 30)
		return"overweight";
	if (bmi1 >=30&&bmi1 < 35)
		return"moderately obese";
	if (bmi1 >= 35&&bmi1 < 40)
		return"severly obese";
	if (bmi1 >=40 )
		return" very severely obese";
} ;

