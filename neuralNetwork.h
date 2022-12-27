#ifndef NEURALNETWORK_H //Header Guard: We use this to break "Duplicate defination problem"
#define NEURALNETWORK_H //Defining the header guard

// double singleInsingleOut(double, double);
double weightedSum( double* input, double* weight, int LEN);

double multipleInSingleOut(double*input, double* weight, int LEN);

void matrixVectorMultiply(double* input,
                        int inputLEN,
                        double* output,
                        int outputLEN,
                        double weight[outputLEN][inputLEN]);

void multipleInputMultipleOutput(double* input,
                        int inputLEN,
                        double* output,
                        int outputLEN,
                        double weight[outputLEN][inputLEN]);
                        
void hiddenLayerNN(double* input,
                    int inputLEN,
                    int hiddenLEN,
                    double INhiddenweight[hiddenLEN][inputLEN],
                    int outputLEN,
                    double OUThiddenweight[outputLEN][hiddenLEN],
                    double* output);
#endif // Ending Header guardd
