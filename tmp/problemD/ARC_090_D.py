from collections import deque

#幅優先探索でラベリング
def bfs(x, graph, people):
    #people[x] is None -> まだ訪問していない．訪問していたらなラベルがつくので，
    if people[x] is not None:
        return
    unvisited = deque([x])
    people[x] = 0
    while unvisited:
        now = unvisited.popleft()
        for Next, d in graph[now]:
            if people[Next] is None:
                people[Next] = people[now] + d
                unvisited.append(Next)

def main():
    N, M = list(map(int, input().split()))
    graph = [ [] for i in range(N+1)]
    people = [None] * (N+1)

    #グラフの作成
    for i in range(M):
        L, R, D = list(map(int, input().split()))
        graph[L].append((R, D))
        graph[R].append((L, -D))
    #全ての頂点でサーチ ->ラベリングを行う
    for i in range(1,N+1):
        bfs(i, graph, people)

    for i in range(1,N+1):
        for j,d in graph[i]:
            if people[j] - people[i] != d:
                print("No")
                exit()
    print("Yes")
if __name__ == '__main__':
    main()
