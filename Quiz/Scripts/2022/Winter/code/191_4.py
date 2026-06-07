try:
    def h(c):
        z=93
        if c: 
            z=1
        elif c>=-2:
             return 8
        else:
             z=7
        return z
    
    print(h(3))
    
except: print('error')
