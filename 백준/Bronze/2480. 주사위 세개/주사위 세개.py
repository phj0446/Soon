# 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
# 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
# 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.  
import sys
a, b, c = map(int, sys.stdin.readline().split())

if a == b and b == c:
    print(10000+a*1000)
elif a == b and a != c:
    print(1000+a*100)
elif a == c and a != b:
    print(1000+a*100)    
elif b == c and a != c:
    print(1000+b*100)
elif a != b and b != c:
    if a > b > c or a > c > b:
        print(a*100)
    elif b > a > c or b > c > a:
        print(b*100)    
    elif c > b > a or c > a > b:
        print(c*100)