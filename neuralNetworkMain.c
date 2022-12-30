#include <stdio.h>
#include<math.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"
#define inputLEN 3
#define outputLEN 3
#define hiddenLEN 3

double temperature[] = {30,23,50,-10,60};
double humidity[] = {87, 65, 70, 75, 50};
double airQuality[] = {110, 147, 160, 98};
  
double INhiddenweight[hiddenLEN][inputLEN]= {{-2,   9.5,  2.01},
                                            {-0.8, 7.2, 6.3},
                                            {-0.5, 0.45, 0.9}
                                            };

double OUThiddenweight[outputLEN][hiddenLEN]= {{-1.0, 1.15, 0.11},
                                                {-0.18, 0.15, -0.01},
                                                {0.25,   -0.25,  -0.1}
                                                };
int main()
{
    double hiddenOutput[hiddenLEN];
    double output[outputLEN];
    double input[] = {temperature[0], humidity[0], airQuality[0]};
    double actualOutput[] = {500, 15, -80};

    hiddenLayerNN(input, inputLEN, hiddenLEN, INhiddenweight, outputLEN, OUThiddenweight, output);
    for(int i =0; i<outputLEN; i++)
    {
        printf("The predicted resulkt is: %.2lf \n", output[i]);
        printf("The error received is %.2lf \n", lossFunction(output[i],actualOutput[i]));
    }
}