N = int(input())

if N >= 4:
    for _ in range((N//4)):
        print('long', end=" ")
    print('int')

else:
    print('int')