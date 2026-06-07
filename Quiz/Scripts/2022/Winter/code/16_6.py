try:
    a,b,c=6,4,5
    def f(b):
        global c
        a+=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=2,0,7
    print(f(b),a,b,c)
    
except: print('error')
