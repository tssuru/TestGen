try:
    def f(a,b):
        c=86
        if a:
            return 0
        if b<-4:
             c=2
        else: 
            return 8
        return c
    
    print(f(2,8))
    
except: print('error')
