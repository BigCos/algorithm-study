#오븐구이가 끝나는 시각 계산
H, M = input().split() #현재시각
c = int(input()) #소요시각
h = int(H)
m = int(M)

c1 = c//60
c2 = c%60
if c1 == 0 : #소요시각 한시간 이내
    if m + c2 >= 60 : #시간값 바뀜
        if h == 23: #자정 넘김
            h = 0
            m = m + c2 - 60
            print (h, m)
        else:
            h = h+1
            m = m + c2 -60
            print (h, m)
    else :
        m = m + c2
        print (h, m)
else : #소요시각 한시간 초과
    if m + c2 >= 60 :
        h = h+1
        m = m + c2 - 60
        if h + c1 >= 24:
            h = h + c1 - 24
            print (h, m)
        else:
            h = h + c1
            print (h, m)
    else:
        m = m +c2
        if h + c1 >= 24:
            h = h + c1 - 24
            print (h, m)
        else: 
            h = h + c1
            print (h, m)
