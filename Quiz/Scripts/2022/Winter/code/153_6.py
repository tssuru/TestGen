try:
    a,b,c=3,2,5
    def f(b):
        global c
        a-=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=6,4,3
    print(f(b),a,b,c)
    
except: print('error')
