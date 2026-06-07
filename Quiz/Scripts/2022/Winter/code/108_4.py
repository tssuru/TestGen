try:
    def g(a,b):
        c=33
        if b>2:
            c=6
        elif a<-2:
             return 9
        else: 
            c=5
        return c
    
    print(g(-6,1))
    
except: print('error')
