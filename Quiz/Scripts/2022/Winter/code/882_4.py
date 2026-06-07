try:
    def f(a,b):
        c=57
        if a<0:
            c=1
        elif b!=3:
             return 6
        else: 
            return 8
        return c
    
    print(f(-5,5))
    
except: print('error')
