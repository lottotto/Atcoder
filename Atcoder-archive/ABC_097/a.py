a,b,c,d = map(int,input().split())

List = [a,b,c]
List.sort()

if(abs(a-c) <= d):
    print('Yes')
elif(List[1] - List[0] <= d and List[2] - List[1] <= d):
    print('Yes')
else:
    print('No')
