def solution(array, height):
    answer = 0
    array.reverse()
    for i in array:
        if height < i:
            answer += 1
        else:
            break
    return answer