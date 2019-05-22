#include<stdio.h>
#include<math.h>

int n = 1;
double sigma = 0;

void changeSigma(double newSigma){
    sigma=newSigma;
}

int main(){
    double in_square_root;
    double sigma = 0;
    double pi = 0;
    while(1){
        sigma = sigma + 1/(n*n);
        changeSigma(sigma);
        pi = sqrt(6.0 * sigma);
        printf("%lf\n", sigma);
        n++;
    }
    return 0;
}
