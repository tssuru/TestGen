try:
    def g(a,b):
        c=83
        if a<=3:
            c=7
        if b<-1:
             c=3
        else: 
            return 0
        return c
    
    print(g(6,-6))
    
except: print('error')
