s = input()
K = int(input())

substringList = []
if(len(s) < 50):
    for i in range(len(s)):
            for j in range(i, len(s)):
                #print(i,j)
                if(s[i:j+1] in substringList):
                    pass
                else:
                    substringList.append(s[i:j+1])
else:
    for i in range(len(s)):
            for j in range(i, i+5):
                substringList.append(s[i:j+1])
#substringList = list(set(substringList))
print(sorted(list(set(substringList)))[K-1])
