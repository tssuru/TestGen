try:
    def f(a,b):
        c=83
        if a<=-5:
            c=7
        if b<-1:
             return 4
        else: 
            return 8
        return c
    
    print(f(-4,-9))
    
except: print('error')
