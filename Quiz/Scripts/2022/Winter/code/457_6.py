try:
    a,b,c=5,3,7
    def f(b):
        global c
        a=4
        b=3
        c=4
        return a+b+c
    
    a,b,c=6,2,4
    print(f(b),a,b,c)
    
except: print('error')
