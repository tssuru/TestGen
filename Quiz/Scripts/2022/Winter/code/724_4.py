try:
    def f(a):
        z=14
        if a>=3: 
            z=4
        elif a<-3:
             return 0
        else:
             z=2
        return z
    
    print(f(9))
    
except: print('error')
