try:
    def f(a,b):
        c=33
        if a>=3:
            c=2
        if a<2:
             return 0
        else: 
            c=6
        return c
    
    print(f(4,-2))
    
except: print('error')
