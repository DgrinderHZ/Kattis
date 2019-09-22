g, s, c = map(int, input().split())

vectCost = {"p": 8, "d": 5, "e": 2}

treaCost = {"g": 6, "s": 3, "c": 0}

money = 3*g + 2*s+ 1*c

if money >= 8:
    print("Province or Gold")
elif money >= 6:
    print("Duchy or Gold")
elif money >= 5:
    print("Duchy or Silver")
elif money >= 3:
    print("Estate or Silver")
elif money == 2:
    print("Estate or Copper")
else:
    print("Copper")


