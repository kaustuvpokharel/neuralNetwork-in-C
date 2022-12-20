#include <stdio.h>
#include "neuralNetwork.h"
#include "neuralNetwork.c"
#define inputLEN 3
#define outputLEN 3

double temperature[] = {12,23,50,-10,60};
double humidity[] = {60, 65, 70, 75, 50};
double airQuality[] = {70, 147, 160, 98};
  
double weight[3][3]= {{-2,   9.5,  1},
                      {-0.8, 6.1, 2.5},
                      {0.5, 0.45, 0.9}
                      };
int main()
{
    double input[] = {temperature[0], humidity[0], airQuality[0]};
    double output[outputLEN];
    multipleInputMultipleOutput(input,inputLEN, output, outputLEN, weight);
    for(int i =0; i<outputLEN; i++)
    {
        printf("The predicted resulkt is: %.2lf \n", output[i]);
    }
}