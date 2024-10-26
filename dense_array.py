a=int(input())
l=[]

def is_dense(b):
    global c
    for j in range(len(b)-1):
        max_=max(b[j],b[j+1])
        min_=min(b[j],b[j+1])
        if max_/min_>2:
            return False
    else:
        return True
def make_dense(b):
    global c
    for j in range(len(b)-1):
            if b[j]/b[j+1]>2:
                b.insert(j+1,2*b[j+1])
                c=c+1
            elif b[j+1]/b[j]>2:
                b.insert(j+1,2*b[j])
                c=c+1
    return b

for i in range(a):
    c=0
    n=int(input())
    b=list(map(int,input().split()))
    
    if is_dense(b) is True:
        l.append(0)
    else:
        while is_dense(b) is False:
            b=make_dense(b)
        l.append(c)

for i in l:
    print(i)
# from math import log
# b=[]
# for i in range(int(input())):
#     c=0
#     n=int(input())
#     l=list(map(int,input().split()))
#     for i in range(0,n-1):
#         if max(l[i],l[i+1])/min(l[i],l[i+1])>2:
#             c=c+int(log(max(l[i],l[i+1])/min(l[i],l[i+1]),2)-0.0001)
#     b.append(c)
# for i in b:
#     print(i)