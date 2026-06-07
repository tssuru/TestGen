try:
    a,b,c=1,4,2
    def f(a):
        a*=4
        b=3
        c=3
        return a+b+c
    
    a,b,c=8,7,3
    print(f(b),a,b,c)
    
except: print('error')
