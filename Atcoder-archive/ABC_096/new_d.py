N, C = map(int, input().split())
xv = [list(map(int, input.split())) for _ in range(N)]

r1,r2,l1,l2 = [0],[0],[0],[0]
sum = 0

for x,cal in xv:
    sum += cal
    r1.append(max(r1[-1], sum-x))
    r2.append(max(r2[-1], sum-2*x))
print('r1:', r1)
print('r2:', r2)
# sum = 0
# for x, cal in xv[::-1]:
#     sum += cal
#     l1.append(max(l1[-1], sum-(C-x)))
#     l2.append(max(l1[-1], sum-2*(C-x)))
