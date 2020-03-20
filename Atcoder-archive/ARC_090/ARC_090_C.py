N = int(input())
List = [list(map(int, input().split())) for i in range(2)]
ans = 0
for i in range(N):
    temp = sum(List[0][0:i+1]) + sum(List[1][i:])
    if temp > ans:
        ans = temp
print(ans)
