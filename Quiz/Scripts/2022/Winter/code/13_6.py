try:
    a,b,c=0,3,1
    def f(a):
        global c
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=6,5,4
    print(f(b),a,b,c)
    
except: print('error')
