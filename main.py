# Dz na 01.02.2024
import random

# №1
a = 0
for i in range(10):
    b = random.randint(-300, 300)
    if b < 0:
        a += 1  
print(a)

# №2
a = random.randint(-100, 100)
b = random.randint(-100, 100)
c = random.randint(-100, 100)
print(a)
print(b)
print(c)