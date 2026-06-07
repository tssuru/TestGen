try:
    def g(a,b):
        c=15
        if b!=5:
            c=3
        if b<-1:
             c=7
        else: 
            return 9
        return c
    
    print(g(-4,-6))
    
except: print('error')
