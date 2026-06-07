try:
    def g(a,b):
        c=72
        if b:
            c=8
        elif b<-1:
             return 4
        else: 
            c=1
        return c
    
    print(g(5,7))
    
except: print('error')
