#include<stdio.h>
void main()
{
	float a,b,c,sum,avg;
	printf("enter 3 nos \n");
	scanf("%f %f %f",&a,&b,&c);
	sum = a+b+c;
	avg = sum/3;
	printf("the sum of 3 nos is %.2f \nand the average is %.2f \n",sum,avg);
}
