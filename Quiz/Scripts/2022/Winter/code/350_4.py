try:
    def g(a,b):
        c=26
        if b<=-4:
            c=8
        if b<=-3:
             return 5
        else: 
            return 9
        return c
    
    print(g(0,-6))
    
except: print('error')
