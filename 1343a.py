for b in range(int(input())):
    n=int(input())
    i=2
    a=2**i-1
    # print(n/a)
    # print(isinstance(n/a,int))
    while a<=n:
        if (n%a)==0:
            print(int(n/a))
            break
        else:
            i+=1
            a=2**i-1


