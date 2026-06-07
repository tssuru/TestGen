try:
    def g(c):
        z=72
        if c<5: 
            z=4
        elif c!=1:
             return 6
        else:
             z=7
        return z
    
    print(g(-5))
    
except: print('error')
