#include "pch.h"
#include <iostream>
#include <stdio.h> 
#include <math.h>

int main()
{
	double v0, a, t, V;

	//Введення початкових даних
	printf("Input v0: ");
	scanf("%if", &v0);
	printf("Input a: ");
	scanf("%if", &a);
	printf("Input t: ");
	scanf("%if", &t)
		V = v0 + a * t;
	printf("V=%if\n", V);
	system("pause");
	return 0
}
