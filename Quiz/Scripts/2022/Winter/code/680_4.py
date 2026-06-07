try:
    def f(b):
        z=14
        if b<-4: 
            z=8
        if b<=0:
             return 0
        else:
             z=4
        return z
    
    print(f(-1))
    
except: print('error')
