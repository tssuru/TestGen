try:
    a,b,c=2,8,9
    def f(b):
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=1,0,5
    print(f(b),a,b,c)
    
except: print('error')
