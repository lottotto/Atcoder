import numpy as np
N, C = map(int, input().split())
X,V = [],[]
for _ in range(N):
    x,v = map(int, input().split())
    X.append(x)
    V.append(v)

r1,r2,l1,l2 = [0],[0],[0],[0]
sum = 0
#原点から時計回りに行ってくる、行って戻ってくるパターン。前の奴と比較して、それより小さかったら無視
for i in range(N):
    sum += V[i]
    #print(r1, r2)
    r1.append(max(r1[i], sum-X[i]))
    r2.append(max(r2[i], sum-2*X[i]))
sum = 0
for i in range(N,0,-1):
    #print('hogehoge',i,V[i-1],X[i-1])
    sum += V[i-1]
    #print(l1, l2)
    l1.append(max(l1[-1], sum-(C-X[i-1])))
    l2.append(max(l2[-1], sum-2*(C-X[i-1])))
#print(l1, l2)
a = max(np.array(r1) + np.array(l2)[::-1])
b = max(np.array(r2) + np.array(l1)[::-1])
print(max(a,b))
