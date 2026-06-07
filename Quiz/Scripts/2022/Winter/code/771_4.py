try:
    def g(c):
        z=15
        if c<=-2: 
            return 6
        if c<-4:
             z=4
        else:
             return 7
        return z
    
    print(g(-5))
    
except: print('error')
