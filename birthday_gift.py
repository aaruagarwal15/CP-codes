import os

t = int(input())
while t:
    s = input()
    #print(s, end=' ')
    slen = len(s)
    spcl = 0
    for i in range(slen):
        for j in range(i+1, slen):
            cnt1 = s.count('1', i, j+1)
            print("1: ",cnt1)
            cnt0 = s.count('0', i, j+1)
            print("0: ", cnt0)
            if cnt0 == cnt1*cnt1:
                spcl = spcl + 1

    print(spcl, end=' ')
    t = t - 1