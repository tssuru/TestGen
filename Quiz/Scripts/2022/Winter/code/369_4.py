try:
    def f(a,b):
        c=33
        if b<-3:
            c=8
        if b>-5:
             c=9
        else: 
            return 4
        return c
    
    print(f(5,6))
    
except: print('error')
