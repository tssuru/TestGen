try:
    def g(b):
        u=53
        if b: 
            return 3
        if b<-1:
             u=7
        else:
             return 4
        return u
    
    print(g(2))
    
except: print('error')
