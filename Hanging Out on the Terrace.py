l, n = map(int, input().split())

total = 0
ans = 0
for _ in range(n):
	typ, num = input().split()
	if typ == "leave":
		total -= int(num)
	elif total+int(num) <= l:
		 total += int(num)
	else: 
		ans += 1
print(ans)
