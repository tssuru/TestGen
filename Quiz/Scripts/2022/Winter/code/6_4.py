try:
    def f(d):
        z=49
        if d!=4: 
            return 3
        if d<-2:
             z=6
        else:
             return 7
        return z
    
    print(f(5))
    
except: print('error')
