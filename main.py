# Dz na 23.11.23
a = int(input("Антон"))
b = int(input("Борис"))
w = int(input("Виктор"))

if a == b == w:
    print("Все одинакового возраста")
elif a > b:
    if a > w:
        print("Антон старший")
    elif a == w:
        print("Антон и Виктор старшие")
elif a > w:
    if a > b:
        print("Антон старший")
    elif a == b:
        print("Антон и Борис старшие")
elif b > a:
    if b > w:
        print("Борис старший")
    elif b == w:
        print("Борис и Виктор старшие")
elif b > w:
    if b > a:
        print("Борис старший")
    elif b == a:
        print("Борис и Антон старшие")
elif w > a:
    if w > b:
        print("Виктор старший")
    elif w == b:
        print("Борис и Виктор старшие")
elif w > b:
    if w > a:
        print("Виктор старший")
    elif w == a:
        print("Виктор и Антон старшие")