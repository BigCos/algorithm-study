A,B,C=input().split()
a = int (A)
b = int (B)
c = int (C)
x1= (a+b)%c 
print(x1)
x2 = ((a%c) + (b%c))%c
print(x2)
x3 = (a*b)%c
print(x3)
x4 =  ((a%c) * (b%c))%c 
print(x4)
