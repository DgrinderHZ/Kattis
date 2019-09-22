from math import sin

h, v = map(int, input().split())

PI = 3.14159265
ans = int(h/sin(v*PI/180)+1)
print(ans)
