use strict;
use warnings;
use Time::HiRes;

my $n = 1;
my $sigma = 0.0;
my $pi = 0.0;
my $piConstant = 3.14159265358979323846;
my $digits = 5;
my $constant = 10**$digits;
my $equal = int($piConstant*$constant + 0.5);
my $start = Time::HiRes::gettimeofday();

while(int($pi*$constant+0.5)!=$equal){
  $sigma = $sigma + 1/($n * $n);
  $pi = sqrt($sigma * 6.0);
  $n++;
}

my $end = Time::HiRes::gettimeofday();
printf("%.4f\n", $end - $start);
