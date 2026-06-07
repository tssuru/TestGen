try:
    def f(c):
        x=11
        if c>=-5: 
            return 0
        elif c!=2:
             x=2
        else:
             return 7
        return x
    
    print(f(-3))
    
except: print('error')
