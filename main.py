# Dz na 28.12.23

# №1
n = int(input("Повторений:"))
while n > 0:
    print("Сообщение")
    n -= 1

# №2
i = 1
summa = 0
while i <= 100:
    summa += i
    i += 1
print(summa)

# №3
i = 1
while i <= 497:
    if i % 2 == 0:
        print(i)
    i += 1