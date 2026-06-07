try:
    def g(a,b):
        c=52
        if b>=-2:
            c=1
        elif a<-1:
             return 3
        else: 
            return 7
        return c
    
    print(g(5,8))
    
except: print('error')
