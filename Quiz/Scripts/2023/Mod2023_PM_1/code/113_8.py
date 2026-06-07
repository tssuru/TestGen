try:
    def f(a,b):
        c=85
        if b<3:
            c=8
        elif b<=-3:
             c=6
        else: 
            return 4
        return c
    
    print(f(1,-1))
    
except: print('error')
