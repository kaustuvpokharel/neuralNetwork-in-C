#include "neuralNetwork.h"

// double singleInsingleOut(double input, double weight)
// {
//     double prediction = input * weight;
//     return prediction;
// }

double weightedSum( double* input, double* weight, int LEN)
{
    double output;
    for(int i = 0; i < LEN; i++)
    {
        output += input[i] * weight[i];
    }
    return output;

}

double multipleInSingleOut(double*input, double* weight, int LEN)
{
    double prediction;
    prediction = weightedSum(input, weight, LEN);

    return prediction;
}