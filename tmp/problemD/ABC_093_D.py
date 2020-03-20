Q = int(input())
for i in range(Q):
    a,b = (map(int, input().split()))
    if(a == b):
        print(2*a -2)
    elif(abs(a-b) == 1):
        print(2 * min(a,b) -2)
    else:
        c = int((a*b) ** 0.5)
        if c == (a*b) ** 0.5:
            c -= 1
        if(c*(c+1) >= a*b):
            print(2*c-2)
        else:
            print(2*c-1)
