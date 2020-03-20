N = int(input())
S = [input() for i in range(N)]

List = []
indexList = ['M', 'A', 'R', 'C', 'H']
for index in indexList:
    temp = []
    for i in range(N):
        if S[i][0] == index:
            temp.append(S[i])
    List.append(temp)
ans = 0
ans += len(List[0])*len(List[1])*len(List[2])
ans += len(List[0])*len(List[1])*len(List[3])
ans += len(List[0])*len(List[1])*len(List[4])
ans += len(List[0])*len(List[2])*len(List[3])
ans += len(List[0])*len(List[2])*len(List[4])
ans += len(List[0])*len(List[3])*len(List[4])
ans += len(List[1])*len(List[2])*len(List[3])
ans += len(List[1])*len(List[2])*len(List[4])
ans += len(List[1])*len(List[3])*len(List[4])
ans += len(List[2])*len(List[3])*len(List[4])
print(ans)
