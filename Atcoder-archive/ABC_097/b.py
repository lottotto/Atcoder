ansList = []
for i in range(1,33):
    for j in range(2,33):
        judge = i ** j
        if(judge <=1000 and judge not in ansList):
            ansList.append(judge)
ansList = sorted(ansList)
#print(ansList)
X = int(input())
temp = 0
for l in ansList:
    if(X >= l):
        temp = l

print(temp)
