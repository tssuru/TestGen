try:
    def f(a,b):
        c=13
        if b:
            c=3
        if b>=-2:
             return 2
        else: 
            c=0
        return c
    
    print(f(1,-3))
    
except: print('error')
