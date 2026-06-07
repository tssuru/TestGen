try:
    def f(a,b):
        c=30
        if b<-1:
            c=0
        if a<=0:
             return 8
        else: 
            return 9
        return c
    
    print(f(1,-8))
    
except: print('error')
