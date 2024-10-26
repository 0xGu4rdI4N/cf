d=input()
l=list('qwertyuiopasdfghjkl;zxcvbnm,./')
s=''
if d=='L':
    m=input()
    for i in m:
        c=l.index(i)
        s=s+l[c+1]
else:
    m=input()
    for i in m:
        c=l.index(i)
        s=s+l[c-1]
print(s)
