try:
    a,b,c=8,7,2
    def f(a):
        global c
        a=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=0,6,1
    print(f(b),a,b,c)
    
except: print('error')
