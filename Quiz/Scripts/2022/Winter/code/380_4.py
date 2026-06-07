try:
    def g(a):
        y=28
        if a<=-3: 
            y=4
        if a>-2:
             y=5
        else:
             return 2
        return y
    
    print(g(7))
    
except: print('error')
