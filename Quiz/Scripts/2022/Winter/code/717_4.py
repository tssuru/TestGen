try:
    def g(a,b):
        c=17
        if b<=-1:
            c=8
        if a<-4:
             return 2
        else: 
            return 9
        return c
    
    print(g(-2,-1))
    
except: print('error')
