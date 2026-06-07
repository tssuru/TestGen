try:
    def g(a):
        y=52
        if a<1: 
            return 0
        if a>4:
             y=7
        else:
             y=6
        return y
    
    print(g(9))
    
except: print('error')
