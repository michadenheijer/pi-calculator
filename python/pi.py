import math
import time
import sys

def main():
    start=time.time()
    digits=5
    sigma=0.0
    n=1
    pi=0
    multiply=10**digits
    equal=int(math.pi*(10**digits))
    while int(pi*multiply+0.5) != equal:
        sigma = sigma+(1/math.pow(n, 2))
        pi = math.sqrt(6*sigma)
        n+=1
    now=time.time()
    print("Calculated Pi correctly up to {} digits in: {} seconds using floats and Python {}".format(digits, now-start, sys.version))

if __name__ == "__main__":
    main()
