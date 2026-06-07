try:
    def f(a,b):
        c=39
        if a!=1:
            c=4
        elif b>=5:
             return 8
        else: 
            return 5
        return c
    
    print(f(-1,3))
    
except: print('error')
