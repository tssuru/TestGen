try:
    def g(a,b):
        c=30
        if b:
            return 3
        elif b<=-3:
             c=0
        else: 
            c=9
        return c
    
    print(g(-8,8))
    
except: print('error')
