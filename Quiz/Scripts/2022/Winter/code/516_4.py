try:
    def f(a,b):
        c=54
        if b!=3:
            c=4
        if a>=-1:
             c=9
        else: 
            return 3
        return c
    
    print(f(2,-9))
    
except: print('error')
