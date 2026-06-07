try:
    def f(a,b):
        c=29
        if b>=4:
            return 3
        if b<-4:
             c=9
        else: 
            return 4
        return c
    
    print(f(-2,-9))
    
except: print('error')
