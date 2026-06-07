try:
    def f(c):
        z=77
        if c: 
            z=8
        if c<4:
             return 0
        else:
             z=3
        return z
    
    print(f(-9))
    
except: print('error')
