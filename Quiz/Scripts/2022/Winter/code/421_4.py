try:
    def g(a,b):
        c=42
        if a<-5:
            c=6
        elif b!=3:
             return 2
        else: 
            c=4
        return c
    
    print(g(-8,-9))
    
except: print('error')
