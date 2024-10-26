
l=[]
for t in range(int(input())):
    a=''
    s=input()
    h=s[:2]
    m=s[3:]
    if int(h)==0:
        a='12' + ':' + m + ' AM'
        l.append(a)
    elif int(h)==12:
        a='12' + ':' + m + ' PM'
        l.append(a)
    elif (int(h) > 12 and int(h)<22) :
        a='0'+str(int(h)-12) + ':' + m + ' PM'
        l.append(a)
    elif (int(h)>=22) :
        a=str(int(h)-12) + ':' + m + ' PM'
        l.append(a)
    else:
        a=h + ':' + m + ' AM'
        l.append(a)
for i in l:
    print(i)



