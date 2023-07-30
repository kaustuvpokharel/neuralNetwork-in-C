#ifndef NEURALNETWORK_H //Header Guard: We use this to break "Duplicate defination problem"
#define NEURALNETWORK_H //Defining the header guard

// double singleInsingleOut(double, double);
double weightedSum( double* input, double* weight, int LEN); // This is for the simple neural network with base idea (declared)

double multipleInSingleOut(double*input, double* weight, int LEN);

void matrixVectorMultiply(double* input, // This is the main function to multiply inputs to weights to give outputs.
                        int inputLEN,
                        double* output,
                        int outputLEN,
                        double weight[outputLEN][inputLEN]);

void multipleInputMultipleOutput(double* input, //This wraps the matrixVectorMutiply for more managing the code better
                        int inputLEN,
                        double* output,
                        int outputLEN,
                        double weight[outputLEN][inputLEN]);
                        
void hiddenLayerNN(double* input, // This fuctions takes hidden layers and also wraps the matrixVectorMutiply fuction twice as it will have two inputs.
                    int inputLEN, // One input is as an user input, and second is the hiddenOutput which will act as an input to get output results.,
                    int hiddenLEN,
                    double INhiddenweight[hiddenLEN][inputLEN],
                    int outputLEN,
                    double OUThiddenweight[outputLEN][hiddenLEN],
                    double* output);

double lossFunction(double yhat, double y);// This fuction will calculate the error of by differencing the predicted output to actual output.

void bruteForceLearning( double input,
                        double weight,
                        double actualOutput,
                        double stepAmount,
                        int ephocs);

void normalizeData(double * input, double * output, int LEN);

void randomWeights(int hiddenLEN, int inputLEN, double weightMatrix[hiddenLEN][inputLEN]);
#endif // Ending Header guardd
