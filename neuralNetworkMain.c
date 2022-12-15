#include <stdio.h>
#include "neuralNetwork.h"
//#include "neuralNetwork.c"

double temperature[] = {12,23,50,-10,60};
double weight = -2.00;

int main()
{
    printf("The first predicted value is %lf", singleInsingleOut(temperature[0], weight));
    return 0;
}
