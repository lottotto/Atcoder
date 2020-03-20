N = int(input())
S = input().split()

temp = []
for i in range(N):
    if S[i] in temp:
        pass
    else:
        temp.append(S[i])
print('Three' if len(temp) == 3 else 'Four')
