try:
    def f(c):
        x=73
        if c!=5: 
            return 7
        if c<4:
             x=2
        else:
             return 5
        return x
    
    print(f(3))
    
except: print('error')
