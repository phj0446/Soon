def solution(num_list):
    answer = []
    c1 = 0
    c2 = 0
    for i in num_list:
        if i % 2 == 0:
            c1 += 1
        else:
            c2 += 1
    answer.append(c1)
    answer.append(c2)
    return answer