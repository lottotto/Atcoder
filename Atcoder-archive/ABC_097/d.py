
class UnionFindSet:
    def __init__(self):
        self.dic = dict()

    def find(self,x):
        #xがedgeを持っているかどうかの判定
        if x not in self.dic:
            return x
        else:
            self.dic[x] = self.find(self.dic[x])
            return self.dic[x]

    def union(self,x,y):
        fx = self.find(x)
        fy = self.find(y)
        if fx != fy:
            self.dic[fx] = fy

n, m = map(int,input().split())
p = [None] + list(map(int,input().split()))
s = UnionFindSet()
#最小全域木の作成
for _ in range(m):
    x,y = map(int,input().split())
    s.union(x,y)

ans = 0
for i in range(1,n+1):
    #iとPiの根が一緒かどうか
    if(s.find(i) == s.find(p[i])):
        ans += 1
print(ans)



# class UnionFindSet:
#     def __init__(self):
#         self.dic = dict()
#
#     def find(self, x):
#         if x not in self.dic:
#             return x
#         else:
#             print('x:', x, 'dic[x]:', self.dic[x], 'dic:', self.dic)
#             self.dic[x] = self.find(self.dic[x])
#             return self.dic[x]
#
#     def union(self, x, y):
#         fx = self.find(x)
#         fy = self.find(y)
#         if fx != fy:
#             self.dic[fx] = fy
#
# n, m = map(int, input().split())
# p = [None] + list(map(int, input().split()))
# s = UnionFindSet()
# for _ in range(m):
#     x, y = map(int, input().split())
#     s.union(p[x], p[y])
#     print(s.dic)
# ans =0
# for i in range(n, 0, -1):
#     if s.find(i) == s.find(p[i]):
#         print(s.dic)
#         ans += 1
# print(ans)
