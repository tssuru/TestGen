try:
    def f(c):
        x=80
        if c: 
            return 4
        elif c==5:
             x=5
        else:
             return 2
        return x
    
    print(f(-8))
    
except: print('error')
