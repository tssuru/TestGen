try:
    def g(c):
        z=39
        if c!=1: 
            z=7
        elif c<-2:
             return 2
        else:
             return 6
        return z
    
    print(g(-3))
    
except: print('error')
