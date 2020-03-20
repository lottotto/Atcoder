s = input()
data = ["a", "b","c"]
flag = 0
for i in range(3):
    if s[i] in data:
        data.remove(s[i])
    else:
        print("No")
        flag = 1
        break
if(flag == 0):
    print("Yes")
