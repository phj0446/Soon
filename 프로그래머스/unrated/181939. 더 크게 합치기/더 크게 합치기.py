def solution(a, b):
    answer = 0
    a = str(a)
    b = str(b)
    if int(a+b) > int(b+a):
        answer = int(a+b)
    elif int(a+b) < int(b+a):
        answer = int(b+a)
    else:
        answer = int(a+b)
        
    return answer