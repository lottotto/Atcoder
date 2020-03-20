List = list(map(int,input().split()))
K = int(input())
M = max(List)
ans = sum(List) - M + M * 2**K
print(ans)
