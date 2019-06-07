#include<stdio.h>
#include<math.h>
#include<time.h>

clock_t start, end;
double cpu_time_used;

int rounding(double x){
   if (x < 0.0)
     return (int)(x - 0.5);
   else
     return (int)(x + 0.5);
}

double calculate_pi(double digits){
  double i = 1;
  double s = 0.0;
  double pi = 0.0;
  double actual_pi = 3.14159265358979323846;
  int stop_number = (int) floor(actual_pi * pow(10, digits));
  double sig = pow(10, digits);
  start = clock();
  while(rounding(pi*sig) != stop_number){
    s = s + 1/(i*i);
    i++;
    pi = sqrt(6.0 * s);
  }
  end = clock();
  cpu_time_used = ((double) (end - start))/CLOCKS_PER_SEC;
  printf("%.4f\n", cpu_time_used);
  return 0;
}

int main(){
  calculate_pi(5);
  return 0;
}

