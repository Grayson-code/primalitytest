from math import isqrt

def is_prime(n: int) -> bool:
    if n <= 3:
        return n > 1
    if n % 2 == 0 or n % 3 == 0:
        return False
    limit = isqrt(n)
    for i in range(5, limit+1, 6):
        if n % i == 0 or n % (i+2) == 0:
            return False
    return True

print("This is a program to see if the given integer, be it large or small is a prime number.")
print()
n = eval(input("Enter the integer: "))

if is_prime(n):
    print("The Given integer is prime number")
else:
    print("The given integer contains more than 2 factors")

print("Number -> ",n)