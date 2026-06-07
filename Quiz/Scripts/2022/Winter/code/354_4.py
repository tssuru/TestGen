try:
    def f(a,b):
        c=62
        if a!=3:
            c=3
        elif a>0:
             return 4
        else: 
            return 7
        return c
    
    print(f(6,-7))
    
except: print('error')
