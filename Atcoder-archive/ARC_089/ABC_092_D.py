def print_grid(table):
    for t in table:
        temp = ''.join(t)
        temp = temp.replace('1','#')
        temp = temp.replace('0','.')
        print(temp)

A, B = map(int, input().split())
h=100
w = 100
K = 50
table = [['0' for i in range(h)] for j in range(w)]
for i in range(K) :
    for j in range(w):
        table[i][j] = '1'
x,y = 0,0
for a in range(A-1):
    table[x][y] = '0'
    y = y + 2
    if(y > 99):
        y = 0
        x = x + 2
x,y = 51,0
for b in range(B-1):
    table[x][y] = '1'
    y = y + 2
    if(y > 99):
        y = 0
        x += 2
print('100 100')
print_grid(table)
