#!/usr/bin/python3
for k in range(122, 96, -1):
    if k % 2:
        k = k - 32
    print("{:c}".format(k), end="")
