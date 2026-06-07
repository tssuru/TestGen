try:
    def f(a,b):
        c=38
        if a<=-5:
            c=4
        if a>-1:
             return 9
        else: 
            c=5
        return c
    
    print(f(5,-9))
    
except: print('error')
