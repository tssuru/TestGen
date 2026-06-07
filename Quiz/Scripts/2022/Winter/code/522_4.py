try:
    def g(c):
        z=27
        if c: 
            z=6
        elif c<-2:
             z=9
        else:
             return 5
        return z
    
    print(g(0))
    
except: print('error')
