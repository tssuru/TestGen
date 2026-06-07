try:
    def f(a):
        z=50
        if a==4: 
            z=3
        if a<-4:
             return 7
        else:
             z=6
        return z
    
    print(f(1))
    
except: print('error')
