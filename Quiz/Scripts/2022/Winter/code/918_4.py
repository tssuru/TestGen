try:
    def g(a,b):
        c=99
        if b<-2:
            c=8
        elif b>1:
             return 0
        else: 
            return 7
        return c
    
    print(g(6,-4))
    
except: print('error')
