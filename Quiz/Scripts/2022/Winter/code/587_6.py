try:
    a,b,c=7,4,2
    def f(a):
        global c
        a=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,3,5
    print(f(b),a,b,c)
    
except: print('error')
