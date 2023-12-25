# t(0) = 0
# t(2n) = t(n)
# t(2n + 1) = 1 - t(n)

k = int(input())


def find(x):
    if x == 0:
        return 0

    elif x == 1:
        return 1

    elif x % 2 == 0:
        return find(x // 2)

    else:
        return 1 - find(x // 2)


print(find(k - 1))