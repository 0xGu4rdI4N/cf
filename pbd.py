a=[]
for t in range(int(input())):
    n=int(input())
    li = [(0,0)]
    for i in range(len(str(n))):
        newli = []
        for p,q in li:
            l = [(p+1*10**i,q+1*10**i),(p,q+1*10**i),(p+1*10**i,q),(p,q)]
            for p_,q_ in l:
                if (p_*q_)%(10**(i+1)) == n%(10**(i+1)):
                    p = p_
                    q = q_
                    newli.append((p,q))
        li = newli
    # print(li)
    if len(li)==0:
        a.append("NO")
    else:
        a.append("YES")
for i in a:
    print(i)