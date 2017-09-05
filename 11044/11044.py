#!/usr/bin/python3

t = int(input())
for i in range(t):
    n, m = [int(x) for x in input().split()]
    print((n//3)*(m//3))
