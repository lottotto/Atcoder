row1 = list(map(int, input().split()))
row2 = list(map(int, input().split()))
row3 = list(map(int, input().split()))
K = (sum(row1) + sum(row2) + sum(row3)) / 3

if(row1[0]+row2[1]+row3[2] != K):
    print('No')
elif(row1[1]+row2[2]+row3[0] != K):
    print('No')
elif(row1[2]+row2[0]+row3[1] != K):
    print('No')
elif(row1[0]+row2[2]+row3[1] != K):
    print('No')
elif(row1[1]+row2[0]+row3[2] != K):
    print('No')
elif(row1[2]+row2[1]+row3[0] != K):
    print('No')
else:
    print('Yes')
