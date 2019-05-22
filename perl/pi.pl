use strict;
use warnings;
use Time::HiRes;

my $n = 1;
my $sigma = 0.0;
my $pi = 0.0;
my $piConstant = 3.14159265358979323846;
my $digits = 5;
my $start = Time::HiRes::gettimeofday();

while(int($pi*10**$digits +0.5)!=int($piConstant*10**$digits + 0.5)){
  $sigma = $sigma + 1/($n * $n);
  $pi = sqrt($sigma * 6.0);
  $n++;
}

my $end = Time::HiRes::gettimeofday();
printf("Calculated Pi correctly up to %.f digits in %.8f seconds using Perl %s\n", $digits, $end - $start, $^V);
