def calc(prepoint, nextpoint):
    return abs(nextpoint[0]-prepoint[0]) + abs(nextpoint[1]-prepoint[1])

def main():
    H,W,D = map(int,input().split())
    index  = [(0,0) for i in range(H*W+1)]
    A = []
    for i in range(H):
        temp = list(map(int, input().split()))
        for t in temp:
            index[t] = (i,temp.index(t))
        A.append(temp)
    Q = int(input())
    L_R_List = [list(map(int, input().split())) for i in range(Q)]

    for L_R in L_R_List:
        L = L_R[0]
        R = L_R[1]
        ans = 0
        prepoint = index[L]
        while(L != R):
            L += D
            nextpoint = index[L]
            ans += calc(prepoint, nextpoint)
            prepoint = nextpoint
        print(ans)

if __name__ == '__main__':
    main()
