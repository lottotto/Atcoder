

def main():
    N,K = map(int, input.split())
    blacks = [[0 for i in range(2*K)] for j in range(2*K)]
    offset = 0

    for _ in range(N):
        x,y,c = input.split()
        x,y = int(x), int(y)
        x = x % 2*K
        y = y % 2*K

        if c == 'B':
            blacks[x][y] += 1
        else:
            blacks[x][y] -= 1
            offset += 1

    
