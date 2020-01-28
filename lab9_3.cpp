#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main ()
{
    int count = 0;
    float sum = 0, sum2 = 0, M = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()), 2);
        count++;
    }
    M = (1.0/count)*sum;
    cout << "number of data = " << count << endl;
    cout << "Mean = " << M << endl;
    cout << "Standard deviation = " << sqrt(((1.0/count)*sum2) - pow(M, 2)) << endl;
    source.close();
    return 0;
}