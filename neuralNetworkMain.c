#include <stdio.h>
#include<math.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"

/*
#define inputLEN 3
#define outputLEN 3
#define hiddenLEN 3

double input1[] = {30,23,50,-10,60}; //List of input arrays 1                        //For testing
double input2[] = {87, 65, 70, 75, 50}; //List of input arrays 2
double input3[] = {110, 147, 160, 98};//List of input arrays 3
  
double INhiddenweight[hiddenLEN][inputLEN]= {{-2,   9.5,  2.01}, // Weight as a 2nd dimentional array to potray as a matrix as as NN basically is
                                            {-0.8, 7.2, 6.3},    // vector matric multiplication (Hence, indentation is made like a matrix)
                                            {-0.5, 0.45, 0.9}           //Weight for the input to hidden weights, which has 3 input and give 3 output.
                                            };

double OUThiddenweight[outputLEN][hiddenLEN]= {{-1.0, 1.15, 0.11},
                                               {-0.18, 0.15, -0.01},    //Weight for the hidden to output weights, which has 3 input and give 3 output.
                                               {0.25,   -0.25,  -0.1}
                                                };

*/

double weight = 0.5;
double input = 0.3;
double actualOutput = 0.6;
double stepAmount = 0.001;

int main()
{
    bruteForceLearning(input, weight, actualOutput, stepAmount, 1600); 
                                                            /*epochs*/
}