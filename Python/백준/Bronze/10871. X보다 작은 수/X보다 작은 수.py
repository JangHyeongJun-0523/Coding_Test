N, X = map(int, input().split())
sets = list(map(int, input().split()))
under_X = []

for i in range(len(sets)):
    if sets[i] < X:
        under_X.append(sets[i])

for i in range(len(under_X)):
    print(under_X[i], end=" ")