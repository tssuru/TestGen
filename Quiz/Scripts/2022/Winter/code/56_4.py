try:
    def f(a,b):
        c=40
        if b>=5:
            c=7
        elif b<-5:
             c=6
        else: 
            return 4
        return c
    
    print(f(-1,-4))
    
except: print('error')
