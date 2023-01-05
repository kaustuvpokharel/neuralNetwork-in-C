#include "neuralNetwork.h"

// double singleInsingleOut(double input, double weight)
// {
//     double prediction = input * weight;
//     return prediction;
// } 

double weightedSum( double* input, double* weight, int LEN)
{
    double output;
    for(int i = 0; i < LEN; i++) //
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

void matrixVectorMultiply(double* input,        //  A G H O R I I
                        int inputLEN,
                        double* output,
                        int outputLEN,
                        double weight[outputLEN][inputLEN])
{
    for(int i = 0; i < outputLEN; i++)
    {
        for(int j = 0; j <inputLEN; j++)
        {
            output[i] += input[j] * weight[i][j]; //just vector mutiply performed by the help of loop, used for loop to access each element individually.
        }
    }
}

void multipleInputMultipleOutput(double* input,
                                int inputLEN,
                                double* output,
                                int outputLEN,
                                double weight[outputLEN][inputLEN])
{
    matrixVectorMultiply(input, inputLEN, output, outputLEN, weight);
}

void hiddenLayerNN(double* input,
                    int inputLEN,
                    int hiddenLEN,
                    double INhiddenweight[hiddenLEN][inputLEN],
                    int outputLEN,
                    double OUThiddenweight[outputLEN][hiddenLEN],
                    double* output)
{
    double hiddenOutput[hiddenLEN];
    matrixVectorMultiply(input, inputLEN, hiddenOutput, hiddenLEN, INhiddenweight);
    matrixVectorMultiply(hiddenOutput, hiddenLEN, output, outputLEN, OUThiddenweight);

}

double errorCalc(double input, double weight, double actualOutput)
{
    double error = (input * weight) - actualOutput;
    return powf(error, 2);
}

double lossFunction(double yhat, double y)
{
    return powf((yhat -  y), 2);
}