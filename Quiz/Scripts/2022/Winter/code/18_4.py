try:
    def h(b):
        z=63
        if b>-1: 
            z=0
        if b<=4:
             return 6
        else:
             z=9
        return z
    
    print(h(9))
    
except: print('error')
