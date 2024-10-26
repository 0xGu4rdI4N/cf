a=int(input())
l=[]

for i in range(a):
    t=[]
    s=input()
    c=input()
    if c not in s:
        l.append("no")
    else:
        for j in range(len(s)):
            if s[j]==c:
                t.append(j)
        # print(t)
        for m in t:
            if m%2==0:
                l.append("yes")
                break
        else:
            l.append("no")
                
for k in l:
    print(k)