import sys

input = lambda: sys.stdin.readline().strip('\n')


def solve():
    lst = max([i if q == 1 else 0 for i, (q, *p) in enumerate(qry)])
    flp = sum([q == 2 for q, *p in qry[:lst]]) % 2 == 0
    prv = sorted([p[0] for q, *p in qry[:lst] if q == 0], reverse=flp)
    prv = [prv, prv[::-1]]

    add = [[], []]
    for q, *p in qry[lst:]:
        if q == 0:
            add[flp].append(p[0])
        elif q == 2:
            flp = not flp
    return (add[flp][::-1] + prv[flp] + add[not flp])[k - 1]


for T in range(1):
    n, q, k = map(int, input().split())
    qry = [tuple(map(int, input().split())) for _ in range(q)]

    print(solve())