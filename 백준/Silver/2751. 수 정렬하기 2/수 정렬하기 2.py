import sys

n = int(input())
a = []

for _ in range(n):
    a.append(int(sys.stdin.readline()))
    
for i in sorted(a):
    print(i)