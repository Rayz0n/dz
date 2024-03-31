# dz na 01.04.24
from math import *
 
a = int(input("Введите число: "))
if a % 2 == 0:
    print("True")
else:
    print("False")
 
# 2
a = int(input("Введите число: "))
while a > 0:
    print(a % 10)
    a = a // 10
 
# 3
a = int(input("Введите число: "))
i = 0
while a > 0:
    if a % 10 % 2 == 0:
        i += 1
    a = a // 10
print(i)
 
# 4
a = int(input("Введите число: "))
b = sqrt(a)
if b * b == a:
    print("True")
else:
    print("False")
 
# 5
chislo = int(input("Введите трёхзначное число: "))
if chislo > 999 or chislo < 100:
    print("Введённое число не является трёхзначным")
else:
    chisl = chislo
    naibolsh = 0
    chetnix = 0
    nulei = 0
    while chislo > 0:
        if chislo % 10 > naibolsh:
            naibolsh = chislo % 10
        if chislo % 10 % 2 == 0:
            chetnix += 1
        if chislo % 10 == 0:
            nulei += 1
        chislo = chislo // 10
    print("Наибольшая цифра:", naibolsh)
    print("Нулей:", nulei)
    print("Чётных цифр:", chetnix)
    koren = sqrt(chisl)
    if koren * koren == chisl:
        print("Является квадратом другого числа")
    else:
        print("Не является квадратом другого числа")
    if chisl % 5 == 0:
        print("Кратно пяти")
    else:
        print("Не кратно пяти")