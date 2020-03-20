
def isPrime(n):
    if(n == 1):
        return False
    elif(n == 2 or n == 3 or n == 5):
        return True
    flag = 0
    for i in range(2,int(n**0.5)+1):
        if(n%i == 0):
            flag = 1
    if(flag == 0):
        return True
    else:
        return False



N = int(input())
i = 0
temp = 0
List = []
while(i < N):
    judge = temp * 5 + 1
    if(isPrime(judge)):
        List.append(judge)
        i +=1
    temp += 1
print(' '.join(map(str,List)))
