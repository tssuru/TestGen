try:
    def f(a,b):
        c=20
        if a<-3:
            return 0
        if b!=-4:
             c=2
        else: 
            c=5
        return c
    
    print(f(-3,5))
    
except: print('error')
