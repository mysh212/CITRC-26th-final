# Author : ysh
# 2024/12/18 Wed 10:34:02
sig = 0
for _ in range(int(input())):
    a,b = [int(i) for i in input().split()]
    sig = sig + a
    assert(1 <= a <= 10 ** 6)
    assert(1 <= b <= (10 ** 9) * a)
    assert(len([int(i) for i in input().split() if 1 <= int(i) <= 10 ** 9]) == a)

assert(sig <= 3 * (10 ** 6))
quit()