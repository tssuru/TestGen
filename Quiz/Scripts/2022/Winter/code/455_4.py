try:
    def g(c):
        z=62
        if c>=5: 
            z=8
        elif c!=0:
             z=3
        else:
             return 2
        return z
    
    print(g(-4))
    
except: print('error')
