try:
    
    a,b,c=6,8,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=2,a=1,c=0)
    print(a,b,c)
    
except: print('error')
