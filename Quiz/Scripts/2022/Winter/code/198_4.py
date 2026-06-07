try:
    def f(a,b):
        c=49
        if b:
            c=3
        if a>=-5:
             c=7
        else: 
            return 0
        return c
    
    print(f(2,-3))
    
except: print('error')
