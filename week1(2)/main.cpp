#include <stdio.h>

float sum(float a, float b)
{
	float c;
	c = a + b;
	return c;
}
float different(float a, float b)
{
	float c;
	c = a - b;
	return c;
}
float multiply(float a, float b)
{
	float c;
	c = a * b;
	return c;
}
float quotient(float a, float b)
{
	float c;
	c = a / b;
	return c;
}

int main()
{
	float a, b;

	printf("a =");
	scanf_s("%f", &a);
	printf("b =");
	scanf_s("%f", &b);
	printf("a+b =%f\n", sum(a, b));
	printf("a-b =%f\n", different(a, b));
	printf("a*b =%f\n", multiply(a, b));
	printf("a/b =%f\n", quotient(a, b));
	return 0;
}