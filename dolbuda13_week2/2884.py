#45분 일찍 알람 설정하기
H, M = input().split()
h = int(H)
m = int(M)
if m >= 45 :
    m = m - 45
    print (h, m)
else :
    m = m + 15 #60-45
    if h !=0 :
        h = h-1
        print (h, m)
    else :
        h = 23
        print (h, m)
