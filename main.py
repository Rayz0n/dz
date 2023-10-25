# Dz na 26.10.23

# №2
abc = int(input("Число"))
a = inp//100
b = inp%100//10
c = inp%100%10
print(a, b, c)

# №3
abc = int(input("Число"))
a = abc // 100 + abc % 100 // 10 + abc % 100 % 10
b = abc // 100 * 100
c = abc % 100 % 10 * 10
d = abc % 100 // 10
print(a, b+c+d)