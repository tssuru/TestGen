try:
    def f(a,b):
        c=83
        if a!=1:
            c=4
        if b>=2:
             return 8
        else: 
            c=3
        return c
    
    print(f(2,9))
    
except: print('error')
