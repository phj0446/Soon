m = int(input())
n = int(input())
l = []
for i in range(m, n+1):
    l.append(i)

s = []

for i in l:
    count = 0
    if i == 1:
        continue
    for j in range(1, int(i**0.5)+1):
        if i % j == 0:
            count += 2
        elif j ** 2 == i:
            count -= 1
    if count == 2:
        s.append(i)

if s != []:
    print(sum(s))
    print(min(s))
else:
    print(-1)