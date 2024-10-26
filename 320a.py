    m=input()
    a=m[::-1]
    l=['1','41','441']
    ans=True
    i=0
    # print(a)
    while ans:
        try:
            if len(a)==0:
                break
            if a[i]=='1':
                b=a[:i+1]
                # print(a)
                a=a[i+1:]
                # print(a)
                i=0
                if b not in l:
                    ans=False
                    break
            else:
                i=i+1
        except:
            ans=False
            break
    if ans==True:
        print('YES')
    else:
        print('NO')
