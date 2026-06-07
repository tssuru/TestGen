try:
    a,b,c=8,8,7
    def f(a,b=9,c):
        print(a,b,c,end=" ")
    
    f(a=1,3,c=2)
    print(a,b,c)
    
except: print('error')
