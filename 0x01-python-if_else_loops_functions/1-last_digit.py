#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
num = number
numr = (number % 10) if number > 0 else (number * -1) % 10
if (numr > 5 and number > 0):
    print(f"Last digit of {num} is {numr} and is greater than 5")
elif (numr == 0):
    print(f"Last digit of {num} is {numr} and is 0")
elif (number < 0 or numr < 6):
    if (number < 0):
        print(f"Last digit of {num} is -{numr} and is less than 6 and not 0")
    else:
        print(f"Last digit of {num} is {numr} and is less than 6 and not 0")
