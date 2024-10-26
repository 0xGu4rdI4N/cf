t=int(input())
l=[]

for i in range(t):
    a=[]
    n=int(input())
    s=input()
    c=''
    j=0
    while j<len(s):
        try:
            if s[j+2]=="0" and s[j+3]=="0":
            
                a.append(s[j])
                a.append(s[j+1:j+3])
                j=j+4
            elif s[j+2]=='0':
                a.append(s[j:j+2])
                j=j+3
            else:
                a.append(s[j])
                j=j+1
        except:
            try:
                if s[j+2]=='0':
                    a.append(s[j:j+2])
                    j=j+3
                else:
                    a.append(s[j])
                    j=j+1
            except:
                a.append(s[j])
                j=j+1

    # print(a)
    for e in a:
        c=c+chr(int(e)+96)
    l.append(c)
    # print(l)
for k in l:
    print(k)