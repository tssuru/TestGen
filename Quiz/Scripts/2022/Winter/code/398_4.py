try:
    def f(a,b):
        c=62
        if a:
            c=2
        elif b!=3:
             return 8
        else: 
            c=4
        return c
    
    print(f(-2,2))
    
except: print('error')
