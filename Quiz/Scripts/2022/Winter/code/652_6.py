try:
    a,b,c=6,2,9
    def f(a):
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=1,0,7
    print(f(b),a,b,c)
    
except: print('error')
