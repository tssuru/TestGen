try:
    def f(a,b):
        c=36
        if b:
            c=0
        elif b>=1:
             return 3
        else: 
            return 8
        return c
    
    print(f(2,9))
    
except: print('error')
