def solution(num_list):
    answer = 0
    s = 0
    m = 1
    for i in num_list:
        s += i
        m *= i
    if m < s*s:
        answer = 1
    elif m > s*s:
        answer = 0
    
    
    return answer