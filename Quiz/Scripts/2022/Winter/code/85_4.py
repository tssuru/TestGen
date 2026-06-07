try:
    def f(a,b):
        c=99
        if a>-3:
            return 7
        if a>=0:
             c=3
        else: 
            return 9
        return c
    
    print(f(7,-9))
    
except: print('error')
