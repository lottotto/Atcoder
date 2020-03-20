N = int(input())
x = list(map(int, input().split()))

for i in range(N):
    #print(x[0:0])
    temp = x[0:i] + x[i+1:N]
    #print(temp)
    temp.sort()
    #print(temp)
    print(temp[int(len(temp)+1/2)])
