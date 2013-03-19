import sys

def fizz_buzz(n):
    for i in range(1, n):
        if i % 15 == 0:
            print "FizzBuzz"
        elif i % 3 == 0:
            print "Fizz"
        elif i % 5 == 0:
            print "Buzz"
        else:
            print i

if len(sys.argv) > 1:
    fizz_buzz(int(sys.argv[1]))
