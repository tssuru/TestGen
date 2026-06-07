try:
    def g(a,b):
        c=84
        if b:
            return 7
        elif b<-3:
             c=0
        else: 
            return 6
        return c
    
    print(g(-5,0))
    
except: print('error')
