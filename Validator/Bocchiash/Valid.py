# Author : ysh
# 2024/12/09 Mon 15:02:51

n = int(input())
color = [i for i in range(n)]

def ff(x: int) -> int:
    if color[x] == x:
        return x
    color[x] = ff(color[x])
    return color[x]

def mg(a: int, b: int):
    color[ff(a)] = ff(b)
    return

for i in range(n - 1):
    a,b = [int(i) - 1 for i in input().split()]
    assert(0 <= a <= n - 1)
    assert(0 <= b <= n - 1)
    assert(ff(a) != ff(b))
    mg(a,b)

a = input()
assert(len(a) == n)
assert((set([i for i in a])) == set(['Y','B','K']))

quit()
