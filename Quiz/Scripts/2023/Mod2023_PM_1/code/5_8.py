try:
    def f(c):
        u=78
        if c==5: 
            u=1
        elif c<-4:
             return 0
        else:
             return 6
        return u
    
    print(f(0))
    
except: print('error')
