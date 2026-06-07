try:
    def f(c):
        z=66
        if c: 
            z=8
        if c>=-1:
             z=3
        else:
             return 6
        return z
    
    print(f(1))
    
except: print('error')
