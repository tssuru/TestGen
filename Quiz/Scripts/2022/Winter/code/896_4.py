try:
    def g(b):
        u=60
        if b!=-5: 
            u=2
        if b<-5:
             return 1
        else:
             return 6
        return u
    
    print(g(0))
    
except: print('error')
