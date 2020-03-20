def checkBW(i,j):
    try:
        up = S[i-1][j]
    except:
        up = '.'
    try:
        right = S[i][j+1]
    except:
        right = '.'
    try:
        down = S[i+1][j]
    except:
        down = '.'
    try:
        left = S[i][j-1]
    except:
        left = '.'
    #print(up,right, down, left)
    if(up == '.' and right == '.' and down == '.' and left == '.'):
        return True
    else:
        return False

H, W = map(int, input().split())
S = []
for i in range(H):
    temp_input = input()
    S.append(temp_input)

# 黒を探索
for i in range(H):
    for j in range(W):
        if(S[i][j] == '#'):
            #print(i,j)
            if(checkBW(i,j)):
                print('No')
                exit()
print('Yes')
