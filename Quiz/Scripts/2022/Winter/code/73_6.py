try:
    a,b,c=0,2,3
    def f(a):
        global c
        a=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,7,6
    print(f(b),a,b,c)
    
except: print('error')
