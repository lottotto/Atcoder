H,W = map(int, input().split())
List = [input() for i in range(H)]
queue = [(0,0,1)]
shape = sum(row.count("#") for row in List)
used ={(0,0)}

def check(x,y,c):
    if(x>W-1 or y>H-1 or x<0 or y<0):
        return
    if(List[y][x] == '#'):
        return
    if(x,y) in used:
        return
    queue.append((x,y,c+1))
    used.add((x,y))

f= -1
while queue:
    x,y,c = queue[0]
    if x==W-1 and y==H-1:
        f=1
        break
    queue.pop(0)
    check(x+1,y,c)
    check(x, y+1,c)
    check(x-1,y,c)
    check(x, y-1,c)
print(f if f == -1 else(H*W-c-shape))
