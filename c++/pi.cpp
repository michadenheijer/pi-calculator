#include <iostream>
#include <chrono>
#include <math.h>

using namespace std;
using namespace std::chrono;

void calculate_pi(int digits){
  double n = 1;
  double sigma, pi;
  double calculated_pi = 3.14159265358979323846;
  double equal = floor(calculated_pi * pow(10, digits));
  double constant = pow(10, digits);
  while(round(pi * constant) != equal){
    sigma = sigma + (1/(pow(n, 2)));
    pi = sqrt(6.0 * sigma);
    n++;
  }
}

int main(){
  int digits = 5;
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
  calculate_pi(digits);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();
  auto duration = (duration_cast<microseconds>( t2 - t1 ).count());
  double seconds = (double) duration/1000000;
  cout << "Calculated Pi correctly up to " << digits << " in " << seconds << "seconds using C++" << endl;
  return 0;
}
