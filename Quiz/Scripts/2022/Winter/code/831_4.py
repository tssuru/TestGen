try:
    def f(a,b):
        c=97
        if a<4:
            c=8
        if b>=1:
             return 0
        else: 
            c=7
        return c
    
    print(f(3,-8))
    
except: print('error')
