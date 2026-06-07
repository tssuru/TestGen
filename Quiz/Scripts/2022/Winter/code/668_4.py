try:
    def f(c):
        z=84
        if c>=5: 
            return 1
        if c<-3:
             z=5
        else:
             return 2
        return z
    
    print(f(5))
    
except: print('error')
