try:
    def g(a,b):
        c=70
        if a==0:
            c=5
        if a<-5:
             return 2
        else: 
            return 3
        return c
    
    print(g(-1,-8))
    
except: print('error')
