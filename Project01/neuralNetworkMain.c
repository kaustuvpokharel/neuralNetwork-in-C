#include <stdio.h>
#include<math.h>
#include<stdlib.h>


#include "neuralNetwork.h"
#include "neuralNetwork.c"

#define noOfFeatures 2 //n values
#define noOfExamples 3 // m values
#define noOfHiddenNodes 3 //hidden node
#define noOfOutputNodes 1 // output node

double xraw [noOfFeatures][noOfExamples] ={{2, 5, 1},
                                           {8, 5, 8}};

double yraw[1][noOfExamples]= {{200, 90, 190}};

/*To hold the normalized data of x and y*/
double trainX [noOfFeatures][noOfExamples];
double trainY [1][noOfExamples];

double syn0[noOfHiddenNodes][noOfFeatures];
double syn1[noOfHiddenNodes];

double trainX_eng1[noOfFeatures];
double trainY_eng1;
double z1_eng1[noOfHiddenNodes];
double a1_eng1[noOfHiddenNodes];
double z2_eng1;
double yhat_eng1;

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