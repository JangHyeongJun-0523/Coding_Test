import sys

T = int(sys.stdin.readline().rstrip())

for i in range(1, T+1):
    A, B = map(int, sys.stdin.readline().rstrip().split())
    sys.stdout.write(f"Case #{i}: {A+B}\n")