c = 1
while True:
    n = int(input())
    if n==0:
        break;
    f = []
    s = []
    print("SET", c)
    c += 1
    for i in range(n):
        if (i+1) % 2 == 1:
            f.append(input())
        else:
            s.append(input())
    for i in f:
        print(i)
    s = s[::-1]
    for i in s:
        print(i)
