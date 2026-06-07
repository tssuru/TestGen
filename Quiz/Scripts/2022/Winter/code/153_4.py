try:
    def g(d):
        u=38
        if d: 
            u=7
        if d<-4:
             u=1
        else:
             return 4
        return u
    
    print(g(-1))
    
except: print('error')
