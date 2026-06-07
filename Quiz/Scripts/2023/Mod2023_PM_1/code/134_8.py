try:
    def f(b):
        u=50
        if b: 
            return 8
        elif b<-3:
             u=5
        else:
             u=6
        return u
    
    print(f(-5))
    
except: print('error')
