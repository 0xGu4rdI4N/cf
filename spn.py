l=[]
for t in range(int(input())):
    a,b,c=map(int,input().split())
    if a<b and b<c :
        l.append('STAIR')
    elif a<b and b>c:
        l.append('PEAK')
    else:
        l.append('NONE')
for i in l:
    print(i)

