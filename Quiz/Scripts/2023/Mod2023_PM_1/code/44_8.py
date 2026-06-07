try:
    def g(a,b):
        c=37
        if a:
            return 8
        if b>=5:
             return 4
        else: 
            c=6
        return c
    
    print(g(5,-2))
    
except: print('error')
