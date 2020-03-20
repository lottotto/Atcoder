ansList = [x**2 for x in range(1,32)]

X = int(input())
temp = 0
for l in ansList:
    if(X < l):
        temp = l
print(l)
