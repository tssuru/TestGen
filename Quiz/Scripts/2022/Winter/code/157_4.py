try:
    def g(c):
        z=86
        if c<=-3: 
            z=9
        elif c>=-4:
             z=8
        else:
             return 6
        return z
    
    print(g(-9))
    
except: print('error')
