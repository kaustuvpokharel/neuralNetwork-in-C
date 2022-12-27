#include <stdio.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"
#define inputLEN 3
#define outputLEN 3
#define hiddenLEN 3

double temperature[] = {12,23,50,-10,60};
double humidity[] = {60, 65, 70, 75, 50};
double airQuality[] = {70, 147, 160, 98};
  
double INhiddenweight[hiddenLEN][inputLEN]= {{-2,   9.5,  1},
                                            {-0.8, 6.1, 2.5},
                                            {0.5, 0.45, 0.9}
                                            };

double OUThiddenweight[outputLEN][hiddenLEN]= {{-0.8, 6.1, 2.5},
                                                {0.5, 0.45, 0.9},
                                                {-2,   9.5,  1}
                                                };
int main()
{
    double hiddenOutput[hiddenLEN];
    double output[outputLEN];
    double input[] = {temperature[0], humidity[0], airQuality[0]};

    hiddenLayerNN(input, inputLEN, hiddenLEN, INhiddenweight, outputLEN, OUThiddenweight, output);
    for(int i =0; i<outputLEN; i++)
    {
        printf("The predicted resulkt is: %.2lf \n", output[i]);
    }
}