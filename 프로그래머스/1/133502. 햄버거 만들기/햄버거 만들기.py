def solution(ingredient):
    count = 0
    ham = ''
    
    for i in ingredient:
        ham += str(i)
        
        if ham[-4:] == '1231':
            ham = ham[:-4]
            count += 1
    return count