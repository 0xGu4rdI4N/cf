t=[]
for i in range(int(input())):
    n=int(input())
    s=input()
    k=s
    l=list(k)
    l.sort()
    a=[]
    g=''
    for j in l:
        if j not in a:
            a.append(j)
    for b in s:
        c=a.index(b)
        g=g+a[len(a)-c-1]
    t.append(g)
for d in t:
    print(d)

