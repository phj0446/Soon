def solution(number, limit, power):
    answer = 0
    n_list = []
    
    for i in range(1, number+1):
        c1 = 0
        for j in range(1, int(i**0.5)+1):
            if i % j == 0:
                c1 += 2
            if j ** 2 == i:
                c1 -= 1
        n_list.append(c1)
               
    for i in n_list:
        if i <= limit:
            answer += i
        else:
            answer += power
    return answer