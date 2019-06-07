from decimal import Decimal
import math
import time
import platform

def main():
    start=time.time()
    digits=5
    sigma=Decimal(0)
    n=1
    pi=Decimal(0)
    equal=int(math.pi*(10**digits))
    multiply=10**digits
    while int(pi*multiply+ Decimal("0.5"))!=equal:
        sigma = sigma+(Decimal("1")/(Decimal(str(n))**Decimal("2")))
        pi = (Decimal("6")*sigma).sqrt()
        n+=1
    now=time.time()
    print("{:.4f}".format(now-start))

if __name__ == "__main__":
    main()
