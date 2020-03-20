N = int(input())
List = list(map(int, input().split()))

List.sort(reverse = True)
Alice = List[::2]
Bob = List[1::2]
print(sum(Alice) - sum(Bob))
