
from collections import Counter
N = int(input())
s = []
for i in range(N):
    s.append(input())
s.sort()
M = int(input())
t = []
for i in range(M):
    t.append(input())
t.sort()
s_counter = Counter(s).most_common()
t_counter = Counter(t).most_common()
if(len(s_counter) != 1):
    if(s_counter[0][0] != t_counter[0][0]):
        print(s_counter[0][1])

    elif(s_counter[0][1] > t_counter[0][1]):
        print(s_counter[0][1] - t_counter[0][1])

    else:
        print(s_counter[1][1])
else:
    if(s_counter[0][0] != t_counter[0][0]):
        print(s_counter)
    elif(s_counter[0][1] > t_counter[0][1]):
        print(s_counter[0][1] - t_counter[0][1])
    else:
        print(0)
