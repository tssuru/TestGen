try:
    def h(c):
        z=53
        if c>=4: 
            z=2
        if c<=-4:
             return 8
        else:
             z=3
        return z
    
    print(h(-3))
    
except: print('error')
