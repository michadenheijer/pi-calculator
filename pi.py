import math

def main():
    sigma=0
    n=1
    while True:
        sigma = sigma+(1/math.pow(n, 2))
        pi = math.sqrt(6*sigma)
        n+=1
        print (pi)

if __name__ == "__main__":
    main()
