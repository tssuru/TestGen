try:
    
    a,b,c=6,8,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(c=3,a=2,b=1)
    print(a,b,c)
    
except: print('error')
