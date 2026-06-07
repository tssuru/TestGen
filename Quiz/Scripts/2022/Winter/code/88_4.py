try:
    def h(c):
        z=48
        if c: 
            return 1
        elif c!=3:
             z=9
        else:
             z=6
        return z
    
    print(h(-4))
    
except: print('error')
