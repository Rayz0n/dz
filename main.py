# Dz na 14.12.23

# Квадрат
from graph import *
windowSize(1000, 1000)
x = int(input("x = "))
y = int(input("y="))
n = int(input("n = "))
if y> 1000 or x+n*40> 1000 or x-n*40 > 1000 or x < 0 or y < 0 or x+n*40 < 0 or x-n*40 < 0 or n <= 0:
    print("недоступные координаты")
    exit()
penColor("black") 
penSize(3)
brushColor("blue")
polygon([(x, y), (x+n*40, y+n*40), (x-n*40, y+n*40), (x,y)])
run()

# Буква Г
from graph import *
windowSize(1000, 1000)
x = int(input("x = "))
y = int(input("y="))
n = int(input("n = "))
if y+n*90 > 1000 or x+n*20 > 1000 or y+n*20 > 1000 or x+n*50 > 1000 or x > 1000 or y> 1000 or x < 0 or y < 0 or n < 0: 
    print("недоступные координаты")
    exit()
penColor("black") 
penSize(3)
brushColor("blue")
polygon([(x, y), (x, y+n*90), (x+n*20, y+n*90), (x+n*20, y+n*20), (x+n*50, y+n*20), (x+n*50, y), (x,y)])
run()