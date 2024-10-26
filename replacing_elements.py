a=int(input())
l=[]

for i in range(a):
    n,d=map(int,input().split())
    b=list(map(int,input().split()))
    b.sort()
    if b[-1]<=d:
        l.append('yes')
    else:
        if b[0]+b[1]>d:
            l.append('no')
        else:
            l.append('yes')
for i in l:
    print(i)