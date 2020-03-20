List = [True for x in range(100001)]
c = [0 for x in range(100001)]
#素数ならば、True
List[0] = False
List[1] = False
List[2] = True
for i in range(2,100001):
    if(List[i] == True):
        for j in range(i+i,100001,i):
            List[j] = False
#1print(List)
for i in range(3,100001, 2):
    if(List[i] and List[int((i+1)/2)]):
        # print('hoge')
        c[i] += 1
# print(c)
for i in range(100001):
    c[i] += c[i-1]
#print(c)
Q = int(input())
for _ in range(Q):
    l,r = map(int,input().split())
    print(c[r] - c[l-1])
