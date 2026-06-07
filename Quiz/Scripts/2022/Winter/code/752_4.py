try:
    def g(a,b):
        c=20
        if b<=-3:
            c=1
        if b>=-4:
             return 8
        else: 
            return 7
        return c
    
    print(g(6,-1))
    
except: print('error')
