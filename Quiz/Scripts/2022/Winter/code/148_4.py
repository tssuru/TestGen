try:
    def f(c):
        x=71
        if c==2: 
            return 0
        if c<4:
             x=4
        else:
             x=3
        return x
    
    print(f(4))
    
except: print('error')
