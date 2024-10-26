l=[]

for i in range(int(input())):
    n,m=map(int,input().split())
    a=input()
    b=input()
    for k in range(min(m,n),0,-1):
        s=a[:k]
        if s in b:
            l.append(k)
            break
    else:
        l.append(0)

for j in l:
    print(j)