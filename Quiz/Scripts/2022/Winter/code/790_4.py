try:
    def f(a,b):
        c=45
        if a<0:
            return 1
        elif b>=-3:
             c=5
        else: 
            c=7
        return c
    
    print(f(-3,5))
    
except: print('error')
