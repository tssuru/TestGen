try:
    a,b,c=7,9,2
    def f(a):
        a=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=0,1,7
    print(f(b),a,b,c)
    
except: print('error')
