rl = int(input())
a = int(input())
rl = [0] * rl

bl = 0
for _ in range(a):
    start, end = map(int, input().split())
    rl[start:end] = [1] * (end - start)

l = 0
for i in rl:
    if i == 0:
        l += 1
        bl = max(bl, l)
    else:
        l = 0

print(bl)
