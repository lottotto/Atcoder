List = list(map(int,input().split()))

judge = 3*max(List) - sum(List)

if(judge % 2 == 0):
    print(int(judge/2))
else:
    print(int(1+(judge+1)/2))
