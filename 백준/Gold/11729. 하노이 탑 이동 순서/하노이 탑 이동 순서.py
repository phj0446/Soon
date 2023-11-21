n = int(input())

def hanoi(n, s, a, t):
    if n == 1:
        print(s, t)
    else:
        hanoi(n-1, s, t, a)
        print(s, t)
        hanoi(n-1, a, s, t)

print(2**n-1)
hanoi(n, 1, 2, 3)
