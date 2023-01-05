#include <stdio.h>
#include<math.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"
#define inputLEN 3
#define outputLEN 3
#define hiddenLEN 3

double temperature[] = {30,23,50,-10,60}; //List of input arrays 1
double humidity[] = {87, 65, 70, 75, 50}; //List of input arrays 2
double airQuality[] = {110, 147, 160, 98};//List of input arrays 3
  
double INhiddenweight[hiddenLEN][inputLEN]= {{-2,   9.5,  2.01}, // Weight as a 2nd dimentional array to potray as a matrix as as NN basically is
                                            {-0.8, 7.2, 6.3},    // vector matric multiplication (Hence, indentation is made like a matrix)
                                            {-0.5, 0.45, 0.9}           //Weight for the input to hidden weights, which has 3 input and give 3 output.
                                            };

double OUThiddenweight[outputLEN][hiddenLEN]= {{-1.0, 1.15, 0.11},
                                               {-0.18, 0.15, -0.01},    //Weight for the hidden to output weights, which has 3 input and give 3 output.
                                               {0.25,   -0.25,  -0.1}
                                                };
int main()
{
    double hiddenOutput[hiddenLEN]; //This is the output array space after interaction between input value and input weights.
    double output[outputLEN]; //This is the output array space, after receiving hiddenOutput, obtained with the interactions between hiddenOutput(as input) and output weights.
    double input[] = {temperature[0], humidity[0], airQuality[0]}; // Takes first elements from the inputs as an array of 3 as an input
    double actualOutput[] = {500, 15, -80}; // The actualOuput is here to calculate the error, to comapre with the result received from the program.

    hiddenLayerNN(input, inputLEN, hiddenLEN, INhiddenweight, outputLEN, OUThiddenweight, output);
    for(int i =0; i<outputLEN; i++) // Loop to print the array element of output, which has 3 elements, and the outputLEN can be seen as a breakpoint
    {
        printf("The predicted resulkt is: %.2lf \n", output[i]);//for output printing.
        printf("The error received is %.2lf \n", lossFunction(output[i],actualOutput[i]));//This fuction gives the error.
    }
}