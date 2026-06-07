try:
    def f(a,b):
        c=43
        if a<=-3:
            c=0
        elif b!=2:
             return 3
        else: 
            c=8
        return c
    
    print(f(5,5))
    
except: print('error')
