try:
    def g(a,b):
        c=12
        if a>2:
            return 2
        if b!=3:
             c=3
        else: 
            return 4
        return c
    
    print(g(9,6))
    
except: print('error')
