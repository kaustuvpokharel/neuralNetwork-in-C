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

void bruteForceLearning( double input,
                        double weight,
                        double actualOutput,
                        double stepAmount,
                        int ephocs)
{
    double prediction, error;
    double positivePrediction, pError, negativePrediction, nError;

    for(int i = 0; i < ephocs; i++)
    {
        prediction = input * weight;
        error = powf((prediction - actualOutput), 2);
        printf("Ephocs: [%d] Error : %f  ______  Prediction : %lf \r \n",i, error, prediction);

        positivePrediction = input * (weight + stepAmount);
        pError = powf((positivePrediction - actualOutput), 2);

        negativePrediction = input * (weight - stepAmount);
        nError = powf((negativePrediction - actualOutput), 2);

        if(nError < pError)
        {
            weight = weight - stepAmount;
        }
        if(nError > pError)
        {
            weight = weight + stepAmount;
        }
    }
}

void normalizeData(double * input, double * output, int LEN)
{
    int i;

    double max = input[0];
    //Finding the greater number in an array
    for(int i = 0; i < LEN; i++)
    {
        if(input[i]>max)
        {
            max = input[i];
        }
    }
    //Normalizing//

    for(int i = 0; i < LEN; i++)
    {
        output[i] = input[i] / max;
    }


}

void randomWeights(int hiddenLEN, int inputLEN, double weightMatrix[hiddenLEN][inputLEN])
{
    double dRand;
    srand(2);
    for(int i = 0; i < inputLEN; i++)
    {
        for(int j = 0; j < hiddenLEN; j++)
        {
            dRand = (rand() % 10);
            dRand /= 10;

            weightMatrix[i][j] = dRand;
        }
    }
}

void normalizeData2D(int ROW, int COL, double input[ROW][COL], double output[ROW][COL])
{
    /*Finding MAX in a matrix*/
    double max = -999999999;
    for(int i = 0; i < ROW; i ++)
    {
        for(int j = 0; j < COL; j++)
        {
            if(max < input[i][j])
            {
                max = input[i][j];
            }
        }
    }
    /* Normalizing */

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            output[i][j] = input[i][j] / max;
        }
    }


}