#!/usr/bin/python3
# @JUDGE_ID: mobluse 11044 Python 3 "Closed-form expression"

t = int(input())
for i in range(t):
    n, m = [int(x) for x in input().split()]
    print((n//3)*(m//3))
