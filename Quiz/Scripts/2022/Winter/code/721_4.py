try:
    def f(a,b):
        c=16
        if a<=-2:
            c=1
        elif b>=0:
             return 4
        else: 
            c=5
        return c
    
    print(f(1,-2))
    
except: print('error')
