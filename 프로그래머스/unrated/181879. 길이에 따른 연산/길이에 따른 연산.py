def solution(num_list):
    answer = 0
    a = 1
    if len(num_list) >= 11:
        answer = sum(num_list)
    else:
        for i in range(len(num_list)):
            a*=num_list[i]
            answer = a
    return answer