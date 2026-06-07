try:
    def f(a,b):
        c=73
        if a<2:
            return 8
        elif b>=1:
             c=7
        else: 
            return 9
        return c
    
    print(f(9,-9))
    
except: print('error')
