# Dz na 30.11.23
a = int(input("Возраст: "))
h = a % 10
if a > 110:
    print(a, "лет")
elif h == 1 and a != 11:
    print(a, "год")
elif h == 2 or h == 3 or h == 4:
    if (a != 12) or 13 or 14:
        print(a, "года")
elif a == 11 or a == 12 or a == 13 or a == 14:
    print(a, "лет")
elif h == 5 or h == 6 or h == 7 or h == 8 or h == 9 or h == 0:
    print(a, "лет")