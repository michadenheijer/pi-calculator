<?php

function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

$n=1;
$sigma=0.0;
$pi=0.0;
$piconstant=3.14159265358979323846;
$digits=5;
$constant=10**$digits;
$time_start = microtime_float();

while((int)($pi*$constant+0.5)!=(int)($piconstant*$constant+0.5)){
    $sigma = $sigma + 1/($n*$n);
    $pi = sqrt(6.0 * $sigma);
    $n=$n+1;
}

$time_end = microtime_float();
$time = $time_end - $time_start;
$version = phpversion();
print "Calculated Pi correctly up to $digits digits in $time seconds using PHP $version\n";
?>
