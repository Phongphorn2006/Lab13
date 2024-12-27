#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double myarrays[],int numarray,double aswer[]){
   
    double sum = 0, mean =0 ;
    for(int i = 0;i < numarray;i++){
        sum += myarrays[i];
    }
    mean = sum/numarray;
    aswer[0] = mean;

    double sum1 = 0,stdDevi = 0;
    for(int i = 0;i < numarray; i++){
        sum1 += pow(myarrays[i] - mean,2) ;
    }
    stdDevi =sqrt(sum1/numarray);
    aswer[1] = stdDevi;

    double Multi = 1, GeoMean = 0;
    for(int i = 0;i < numarray; i++){
        Multi = Multi * myarrays[i];  
    }
    GeoMean = pow(Multi,1.0/numarray);
    aswer[2] = GeoMean;

    double sum2 = 0,HarMean = 0;
    for(int i = 0;i < numarray; i++){
        sum2 += 1/myarrays[i];
    }
    HarMean = numarray/sum2;
    aswer[3] = HarMean;

    double max = myarrays[0] ,min = myarrays[0];
    for(int i = 0;i < numarray; i++){
        if(myarrays[i] > max) max = myarrays[i];
        if(myarrays[i] < min) min = myarrays[i];
    }
    aswer[4] = max;
    aswer[5] = min;
}


