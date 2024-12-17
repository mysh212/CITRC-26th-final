# Author : ysh
# 2024/12/09 Mon 15:11:50
a,b = input().split()
c,d = input().split()

pre = 'abcdefgh'
assert(a in pre)
assert(c in pre)
assert(1 <= int(b) <= 8)
assert(1 <= int(d) <= 8)
