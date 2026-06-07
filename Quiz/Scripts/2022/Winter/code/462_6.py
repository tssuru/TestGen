try:
    a,b,c=4,0,9
    def f(a):
        a=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=5,8,7
    print(f(b),a,b,c)
    
except: print('error')
