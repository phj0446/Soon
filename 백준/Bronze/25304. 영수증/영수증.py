import sys
x = int(sys.stdin.readline())
n = int(sys.stdin.readline())
result = 0

for i in range(n):
    a, b = map(int, input().split())
    result += a*b

if x == result:
    print('Yes')
else:
    print('No')
    