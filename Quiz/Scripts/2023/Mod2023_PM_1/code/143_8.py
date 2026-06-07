try:
    def g(a,b):
        c=13
        if b:
            c=2
        elif b<2:
             c=8
        else: 
            return 4
        return c
    
    print(g(6,-5))
    
except: print('error')
