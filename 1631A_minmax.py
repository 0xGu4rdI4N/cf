t=int(input())
l=[]

for i in range(t):
    c=[]
    d=[]
    e=[]
    f=[]
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a1=max(a)
    b1=max(b)
    for j in range(len(a)):
        if a[j]==a1:
            c.append(j)
    for k in range(len(b)):
        if b[j]==b1:
            d.append(k) 
    if a1>b1:
        for m in range(len(b)):
            if b[m]>a[m]:
                b[m],a[m]=a[m],b[m]
        l.append(a1*max(b))
    elif b1>a1:
        for n in range(len(a)):
            if a[n]>b[n]:
                b[n],a[n]=a[n],b[n]
        l.append(b1*max(a))
    else:
        for n in range(len(a)):
            if a[n]>b[n]:
                b[n],a[n]=a[n],b[n]
        l.append(b1*max(a))
for p in l:
    print(p)

