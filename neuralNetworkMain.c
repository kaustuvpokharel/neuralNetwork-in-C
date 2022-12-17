#include <stdio.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"
#define LEN 3

double temperature[] = {12,23,50,-10,60};
double humidity[] = {60, 65, 70, 75, 50};
double airQuality[] = {70, 147, 160, 98};
double weight[]= {-2,2,1};

int main()
{
    double traingsetEG1[] = {temperature[0], humidity[0], airQuality[0]};

    printf("The predicted resulkt is: %.2lf", multipleInSingleOut(traingsetEG1, weight, LEN));
}