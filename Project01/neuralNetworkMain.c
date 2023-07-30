#include <stdio.h>
#include<math.h>
#include<stdlib.h>


#include "neuralNetwork.h"
#include "neuralNetwork.c"

#define noOfFeatures 2 //n values
#define noOfExamples 3 // m values
#define noOfHiddenNodes 3 //hidden node
#define noOfOutputNodes 1 // output node

/* Hours of Workout */
double x1[noOfExamples] = {2, 5, 1};
double x1Nor[noOfExamples];

/* Hours of Rest */
double x2[noOfExamples] = {8, 5, 8};
double x2Nor[noOfExamples];

/* Muscle Gain */
double y[noOfExamples] = {200, 90, 190};
double yNor[noOfExamples];

double syn0[noOfHiddenNodes][noOfFeatures];
double syn1[noOfOutputNodes][noOfHiddenNodes];

int main()
{
    randomWeights(noOfHiddenNodes, noOfFeatures, syn0);
    randomWeights(noOfOutputNodes, noOfHiddenNodes, syn1);
    /*for syn0 random weight*/
    for(int i = 0; i < noOfHiddenNodes; i++)
    {
        for(int j = 0; j < noOfFeatures; j++)
        {
            printf("%f \t", syn0[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    /*for syn1 random weight*/
    for(int i = 0; i < noOfOutputNodes; i++)
    {
        for(int j = 0; j < noOfHiddenNodes; j++)
        {
            printf("%f \t", syn0[i][j]);
        }
        printf("\n");
    }
}