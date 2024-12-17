# Author : ysh
# 2024/12/09 Mon 15:14:21
n = int(input())
f = [int(i) for i in input().split()]

assert(2 <= n <= 2 * 10 ** 5)
assert(len([i for i in f if -(10 ** 6) <= i <= 10 ** 6]) == len(f))
