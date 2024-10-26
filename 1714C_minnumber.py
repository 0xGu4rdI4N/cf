t=int(input())
l=[]

for i in range(t):
    s=int(input())
    if s<10:
        l.append(s)
    else:
        a=""
        c=0
        for j in range(9,0,-1):
            c=c+j
            if c>s:
                break
            else:
                a=a+str(j)

        # print(a)
        d=0
        for k in a:
            d=d+int(k)
        x=s-d
        a=a+str(x)
        a=a[-1::-1]
        l.append(int(a))
for m in l:
    print(m)
