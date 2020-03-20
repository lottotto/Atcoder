a,b,k = map(int,input().split())
ans = []
flag = 0
for i in range(k):
    temp_a = i+a
    temp_b = b-i
    ans.append(temp_a)
    ans.append(temp_b)
    if(temp_a >= b or temp_b <= a):
        break

ans = list(set(ans))
ans.sort()
for a in ans:
    print(a)
