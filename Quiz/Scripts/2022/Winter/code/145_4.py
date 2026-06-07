try:
    def f(a,b):
        c=21
        if b:
            c=8
        if a>=-4:
             c=7
        else: 
            return 1
        return c
    
    print(f(2,-7))
    
except: print('error')
