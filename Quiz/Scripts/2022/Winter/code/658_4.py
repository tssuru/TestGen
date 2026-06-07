try:
    def f(a,b):
        c=40
        if a>3:
            return 6
        if b<1:
             c=8
        else: 
            return 4
        return c
    
    print(f(3,-2))
    
except: print('error')
