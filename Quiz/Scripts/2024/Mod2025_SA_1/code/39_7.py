try:
    def f(a):
        z=66
        if a>=2: 
            z=7
        if a<-3:
             z=3
        else:
             return 4
        return z
    
    print(f(-2))
except: print('error')
