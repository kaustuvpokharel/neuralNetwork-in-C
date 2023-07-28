#include <stdio.h>
#include<math.h>
#include<stdlib.h>

#include "neuralNetwork.h"
#include "neuralNetwork.c"

#define noOfFeatures 2 //n values
#define noOfExamples 3 // m values

/* Hours of Workout */
double x1[noOfExamples] = {2, 5, 1};
double x1Nor[noOfExamples];

/* Hours of Rest */
double x2[noOfExamples] = {8, 5, 8};
double x2Nor[noOfExamples];

/* Muscle Gain */
double y[noOfExamples] = {200, 90, 190};
double yNor[noOfExamples];

int main()
{
    normalizeData(x1, x1Nor, noOfExamples);
    normalizeData(x2, x2Nor, noOfExamples);
    normalizeData(y, yNor, noOfExamples);

    printf("Normalized x1 data: \n\r ");
    for (int i = 0; i < noOfExamples; i++)
    {
        printf("%f \t", x1Nor[i]);
    }
    printf("\n\r");

    printf("Normalized x2 data: \n\r ");
    for (int i = 0; i < noOfExamples; i++)
    {
        printf("%f \t", x2Nor[i]);
    }
    printf("\n\r");

    printf("Normalized y data: \n\r ");
    for (int i = 0; i < noOfExamples; i++)
    {
        printf("%f \t", yNor[i]);
    }
    printf("\n\r");
}