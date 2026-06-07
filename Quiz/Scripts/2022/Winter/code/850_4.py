try:
    def f(a,b):
        c=84
        if a>=0:
            return 2
        elif a>=-5:
             c=0
        else: 
            c=9
        return c
    
    print(f(4,-2))
    
except: print('error')
