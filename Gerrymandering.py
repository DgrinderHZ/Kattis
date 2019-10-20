from math import ceil
p, d = map(int, input().split())
dist = [[0, 0] for i in range(d)]
for _ in range(p):
    d, a, b = map(int, input().split())
    dist[d-1][0] += a
    dist[d-1][1] += b
wb = 0
wa = 0
v = 0
for i in range(len(dist)):
    s = sum(dist[i])
    v += s
    if dist[i][0] < dist[i][1]:
        print("B", dist[i][0], ceil(dist[i][1]-(s/2+1)))
        wb += ceil(dist[i][1]-(s/2+1));
        wa += dist[i][0];
    else:
        print("A", ceil(dist[i][0]-(s/2+1)), dist[i][1])
        wa += ceil(dist[i][0]-(s/2+1));
        wb += dist[i][1];

e = abs(wa-wb)*1.0/(v*1.0)

print(e)
