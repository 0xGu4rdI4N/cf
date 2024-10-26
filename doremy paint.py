# def func(): 
#     l=[]
#     t=int(input())
#     if 1<=t<=100:
#         for i in range(t):
#             n=int(input())
#             if 2<=n<=100:
#                 a=list(map(int,input().split()))
#                 if len(set(a))==1:
#                     l.append("yes")                  
#                 else: 
#                     if len(set(a))==2:
#                         t=[]
#                         for j in a:
#                             t.append(a.count(j))
#                         if abs(t[0]-t[1])>1:
#                             l.append('no')
#                         else:
#                             l.append('yes')
#                     else:
#                         l.append('no')
                        
#     for i in l:
#         print(i)
# func()
                            
l=[]
t=int(input())
if 1<=t<=100:
    for i in range(t):
        n=int(input())
        if 2<=n<=100:
            a=list(map(int,input().split()))
            if len(set(a))==1:
                l.append("yes")
            else: 
                if len(set(a))==2:
                    t=[]
                    for j in a:
                        t.append(a.count(j))
                    print(t)
                    if abs(t[0]-t[1])>1:
                        l.append('no')
                    else:
                        l.append('yes')
                else:
                    l.append('no')
                    
for i in l:
    print(i)
                            

                        