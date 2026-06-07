try:
    def h(c):
        z=65
        if c: 
            z=1
        if c<=3:
             return 0
        else:
             z=7
        return z
    
    print(h(-5))
    
except: print('error')
