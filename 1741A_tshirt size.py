t=int(input())
l=[]
for i in range(t):
    a,b=input().split()
    if 'S' in a and "S" in b:
        
        ax=a.count("X")
        bx=b.count("X")
        if ax>bx:
            l.append("<")
        elif ax==bx:
            l.append("=")
        else:
            l.append(">")
    elif 'L' in a and'L' in b:
        
        ax=a.count("X")
        bx=b.count("X")
        if ax>bx:
            l.append(">")
        elif ax==bx:
            l.append("=")
        else:
            l.append("<")
    elif "M" in a and 'M' in b:
        
        l.append("=")
    elif "S" in a and "M" in b:
        l.append("<")
    elif "M" in a and "S" in b:
        l.append(">")
    elif "L" in a and "M" in b:
        l.append(">")
    elif "M" in a and "L" in b:
        l.append("<")
    elif "S" in a and "L" in b:
        l.append("<")
    elif "L" in a and "S" in b:
        l.append(">")
for k in l:
    print(k)
    
