def solution(num_list):
    answer = 0
    n1 = ''
    n2 = ''
    for i in num_list:
        if i % 2 == 0:
            n1 += str(i)
        else:
            n2 += str(i)
    answer = int(n1) + int(n2)
    return answer