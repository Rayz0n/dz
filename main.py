# Dz na 08.02.2024
import random

# №1
i = 0
for j in range(10):
    x = random.randint(-250, 250)
    y = random.randint(-250, 250)
    if x > 0 and y < 0:
        i+=1
print(i)

# №2
i = 0
for j in range(10):
    x = random.randint(-250, 250)
    y = random.randint(-250, 250)
    if x < 0 and y < 0 and y > -100:
        i+=1
print(i)

# №3
i = 0
for j in range(10):
    x = random.randint(-250, 250)
    y = random.randint(-250, 250)
    if x > 0 and x < 60 and y > 0:
        i+=1
print(i)