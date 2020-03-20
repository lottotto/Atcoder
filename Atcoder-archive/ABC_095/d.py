# def check(place, List):
#     flag = 0
#     for i in range(len(List)):
#         distance = abs(i - place)
#         if distance > len(List):
#             distance = len(List) - distance
#         if distance < List[i]:
#             flag = 1
#     return flag
# def getDistance(Now,Next,C):
#     dst = abs(Next - Now)
#     if(dst > C/2):
#         dst = C - dst
#     return dst
#
#
#
# N, C = map(int, input().split())
# # Counter = [0 for i in range(C)]
# X_V = []
# #V = []
# for i in range(N):
#      #x,v = map(int, input().split()))
#      X_V.append(tuple(map(int, input().split())))
# nowPlace = 0
# while(1):
#     getCal = list(map(lambda x:x[1] - getDistance(nowPlace, x[0], C), X_V))
#     nextPlace = X_V[getCal.index(max(getCal))][0]


N, C = map(int, input().split())
X = [0]
V = [0]
for i in range(N):
    x,v = map(int, input().split())
    X.append(x)
    V.append(v)
#print(-X[1])
inv_X = [C-X[i] for i in range(N+1)][::-1]
inv_X.pop()
inv_X.insert(0,0)
#累積和の計算
right = [0]
left = [0]
#print(V)
for i in range(1,N+1):
    right.append(right[i-1]+V[i])
    left.append(left[i-1]+V[N+1-i])
#Bを固定

for i in range(N+1):
    B = inv_X[i]
    for j in range(N+1-i):


def g(a):
    return max(f(a-1), f(a))
def f(a):
    return right[a] - x[a]
# #print('right:', right, 'left:', left)
# Rtemp_max = 0
# #right -> left pattern
# for i in range(N+1):
#     for j in range(N+1-i):
#         OA = X[i]
#         OB = inv_X[j]
#         RightMovingDistance = 2 * OA + OB
#         getCal = right[i] + left[j] - RightMovingDistance
#         #print(i, j,right[i], left[j], RightMovingDistance)
#         #print('Right_i:',i,'Right_getCal:',getCal)
#         Rtemp_max = max(Rtemp_max, getCal)
# #left -> right pattern
# Ltemp_max = 0
# for i in range(N+1):
#     for j in range(N+1-i):
#         OA = X[i]
#         OB = inv_X[j]
#         LeftMovingDistance = OA + 2 * OB
#         getCal = right[i] + left[j] - LeftMovingDistance
#         #print(i, j,right[i], left[j], LeftMovingDistance)
#         #print('Right_i:',i,'Right_getCal:',getCal)
#         Ltemp_max = max(Ltemp_max, getCal)
# ans = max(Rtemp_max, Ltemp_max)
# print(ans)
