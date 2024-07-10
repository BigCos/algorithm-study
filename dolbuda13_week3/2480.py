#주사위 상금 계산
A,B, C = input().split() #세 개의 주사위
a = int(A) #소요시각
b = int(B)
c = int(C)

#같은 눈 세개
if a == b == c:
    i = 10000 + a * 1000
    print(i)

#같은 눈 두개
elif a == b or b == c or c == a:
    if a == b or c ==a:
        i = 1000 + a * 100
        print(i)
    else:
        i = 1000 + b * 100
        print(i)

#서로 다른 눈
else :
    i = max(a,b,c)
    i = i * 100
    print(i)
