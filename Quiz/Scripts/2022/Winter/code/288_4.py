try:
    def f(a,b):
        c=35
        if a:
            c=1
        elif b!=0:
             return 6
        else: 
            return 3
        return c
    
    print(f(-2,2))
    
except: print('error')
