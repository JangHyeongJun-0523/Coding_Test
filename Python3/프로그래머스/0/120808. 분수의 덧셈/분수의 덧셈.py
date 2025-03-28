def solution(numer1, denom1, numer2, denom2):
    answer = [numer1*denom2+numer2*denom1, denom1*denom2]
    maximum = max(numer1, denom1, numer2, denom2)
    flag = False
    while True:
        for i in range(maximum, 1, -1):
            if answer[0] % i == 0 and answer[1] % i == 0:
                answer[0] /= i
                answer[1] /= i
            else:
                flag = True
        if flag == True:
            break
        elif maximum == 1:
            break
    return answer