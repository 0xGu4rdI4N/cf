def isGood(s):
    for c in range(len(s)-1):
        if s[c]!=s[c+1]:
            continue
        else:
            return False
    return True

l=[]
t=int(input())
if 1<=t<=2000:
    for i in range(t):
        n=input()
        m=input()
        if isGood(m) is False:
            print('1')
            l.append('no')
        elif isGood(n) is True:
                print('2')
                l.append('yes')
        else:
            print('3')
            for k in range(len(n)):
                if isGood(n[:k+1]+m+n[k+1:]) is True:
                    l.append('yes')
                else:
                    l.append('no')
for i in l:
    print(i)
            
    

