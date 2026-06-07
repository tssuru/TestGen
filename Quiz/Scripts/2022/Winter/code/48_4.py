try:
    def f(a,b):
        c=61
        if a:
            return 8
        elif b<3:
             c=3
        else: 
            return 9
        return c
    
    print(f(2,2))
    
except: print('error')
