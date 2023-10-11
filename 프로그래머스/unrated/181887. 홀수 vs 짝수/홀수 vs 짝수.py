def solution(num_list):
    answer = 0
    a = []
    b = []
    for i in num_list[::2]:
        a.append(i) 
    for i in num_list[1::2]:
        b.append(i)
    if sum(a) > sum(b):
        answer = sum(a)
    else:
        answer = sum(b)
    return answer