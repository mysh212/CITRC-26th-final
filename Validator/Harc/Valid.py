# Author : ysh
# 2024/12/09 Mon 15:07:50
f = []
while True:
    try:
        f.append([i for i in input().split()])
    except:
        break

for i in f:
    assert(1 <= int(i[1]) <= 10 ** 6)

assert(len(set([i[0] for i in f])) == len(f))
quit()
