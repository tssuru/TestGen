try:
    def f(a,b):
        c=73
        if a>=-1:
            c=5
        elif b<=4:
             c=9
        else: 
            return 6
        return c
    
    print(f(6,-2))
    
except: print('error')
