t=int(input())
l=[]
for i in range(t):
    p,n=map(int,input().split())
    if p<10:
        for j in range(1,n):
            p=p+(p%10)
        l.append(p)
    else:

for k in l:
    print(k)
