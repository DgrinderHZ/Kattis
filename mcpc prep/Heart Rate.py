n = int(input())
for _ in range(n):
    b, p = input().split()
    b = int(b)
    p = float(p)
    bpm = 60*b/p
    print("%.4f %.4f %.4f" % (bpm-60/p, bpm, bpm + 60/p))
