# Dz na 25.01.2024
from graph import *

# №1
a = int(input("Число: "))
b = int(input("Число: "))
g = a
for i in range(0, b - 1):
    g *= a
print(g)

# №2
penColor("black")
penSize(3)
brushColor("blue")
polygon([(100, 25), (50, 75), (150, 75), (100, 25)])
brushColor("green")
rectangle(60, 76, 140, 175)
run()