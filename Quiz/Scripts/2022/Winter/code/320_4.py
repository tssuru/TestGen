try:
    def g(c):
        y=35
        if c!=2: 
            y=4
        if c<=0:
             y=5
        else:
             return 8
        return y
    
    print(g(-8))
    
except: print('error')
