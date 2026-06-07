try:
    def g(a,b):
        c=17
        if a<=4:
            return 0
        if b<-4:
             c=2
        else: 
            return 7
        return c
    
    print(g(-3,-8))
    
except: print('error')
