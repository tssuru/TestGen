try:
    def f(a,b):
        c=92
        if a:
            c=2
        elif b!=1:
             c=5
        else: 
            return 3
        return c
    
    print(f(6,-3))
    
except: print('error')
