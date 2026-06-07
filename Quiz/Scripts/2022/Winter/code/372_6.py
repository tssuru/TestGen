try:
    a,b,c=7,1,2
    def f(b):
        a=2
        b=1
        c=2
        return a+b+c
    
    a,b,c=3,8,9
    print(f(b),a,b,c)
    
except: print('error')
