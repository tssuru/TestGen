try:
    a,b,c=6,2,0
    def f(a):
        global c
        a*=4
        b=2
        c=4
        return a+b+c
    
    a,b,c=4,6,1
    print(f(b),a,b,c)
    
except: print('error')
