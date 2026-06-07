try:
    a,b,c=0,6,5
    def f(a):
        global c
        a*=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=8,3,2
    print(f(b),a,b,c)
    
except: print('error')
