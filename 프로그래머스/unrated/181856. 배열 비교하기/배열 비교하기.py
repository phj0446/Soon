def solution(arr1, arr2):
    answer = 0
    l1 = sum(arr1)
    l2 = sum(arr2)
    if len(arr1) > len(arr2):
        answer = 1
    elif len(arr1) < len(arr2):
        answer = -1
    else:
        if l1 > l2:
            answer = 1
        elif l1 < l2:
            answer = -1
        else:
            answer = 0
    return answer