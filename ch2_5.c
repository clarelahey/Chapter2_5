#include <stdio.h>
#include <math.h>

int main(void)
{
	/* Initialize variables needed to estimate person's height from femur length. */
	double f_height_femur, m_height_femur, femur, 
		   f_height_humer, m_height_humer, humer;

	/* Prompt the user to enter length of femur bone */
	printf("Enter the length of the femur bone in inches:\n");

	/* Read response from user and assign to variable: femur */
	scanf("%lf",&femur);

	/* Calculate the height estimate of M & F from the bone measurement */
	f_height_femur = femur*1.94 + 28.7;
	m_height_femur = femur*1.88 + 32;

	/* Prompt the user to enter length of the humerus bone */
	printf("Enter the length of the humerus bone in inches:\n");

	/* Read response from suer and assign to variable: humerus */
	scanf("%lf",&humer);

	/* Calculate the height estimate of M & F from the bone measurement */
	f_height_humer = humer*2.8 + 28.2;
	m_height_humer = humer*2.9 + 27.9;

	printf("The height estimates from the femur measurements for females and males"
		", respectively, are: %5.1f, %5.1f\n", f_height_femur, m_height_femur);
	printf("The height estimates from the humerus measurements for females and males"
		", respectively, are: %5.1f, %5.1f\n", f_height_humer, m_height_humer);

	return 0;
}