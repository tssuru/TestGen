try:
    def f(c):
        z=12
        if c>-3: 
            return 6
        if c<5:
             z=9
        else:
             return 2
        return z
    
    print(f(-1))
    
except: print('error')
