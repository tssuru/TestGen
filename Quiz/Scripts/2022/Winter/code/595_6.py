try:
    a,b,c=5,1,9
    def f(a):
        a=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=3,7,2
    print(f(b),a,b,c)
    
except: print('error')
