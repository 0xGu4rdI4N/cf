m=''
for t in range(int(input())):
    f=''
    s=''
    n=int(input())
    if n%2==0:
        for j in range(n//2):
            f=f+'##..'
        f=f+'\n'
        for k in range(n//2):
            s=s+'..##'
        s=s+'\n'
        for i in range(n//2):
            m=m + f + f
            m=m + s + s
    else:
        for i in range(n):
            if i%2==0:
                f=f+'##'
            else:
                f=f+'..'
        f=f+'\n'
        for j in range(n):
            if j%2==0:
                s=s+'..'
            else:
                s=s+'##'
        s=s+'\n'
        for k in range(n):
            if k%2==0:
                m=m + f + f
            else:
                m=m + s + s
print(m)





        