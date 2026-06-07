try:
    def g(a,b):
        c=22
        if b:
            return 0
        if b<-1:
             c=6
        else: 
            return 8
        return c
    
    print(g(-5,1))
    
except: print('error')
