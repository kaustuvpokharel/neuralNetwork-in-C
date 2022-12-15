#include "neuralNetwork.h"

double singleInsingleOut(double input, double weight)
{
    double prediction = input * weight;
    return prediction;
}