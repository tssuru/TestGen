try:
    a,b,c=0,8,6
    def f(b):
        a*=3
        b=3
        c=2
        return a+b+c
    
    a,b,c=0,7,1
    print(f(b),a,b,c)
    
except: print('error')
