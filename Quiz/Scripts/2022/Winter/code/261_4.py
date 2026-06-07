try:
    def g(c):
        x=33
        if c!=1: 
            return 9
        if c<=5:
             x=3
        else:
             return 0
        return x
    
    print(g(-5))
    
except: print('error')
