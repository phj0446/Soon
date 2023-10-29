def solution(numbers):
    answer = ''
    a = ''
    for i in numbers:
        a += i
        if a == 'one':
            answer += '1'
            a = ''
        elif a == 'two':
            answer += '2'
            a = ''
        elif a == 'three':
            answer += '3'
            a = ''
        elif a == 'four':
            answer += '4'
            a = ''
        elif a == 'five':
            answer += '5'
            a = ''
        elif a == 'six':
            answer += '6'
            a = ''
        elif a == 'seven':
            answer += '7'
            a = ''
        elif a == 'eight':
            answer += '8'
            a = ''
        elif a == 'nine':
            answer += '9'
            a = ''
        elif a == 'zero':
            answer += '0'
            a = ''
    return int(answer)