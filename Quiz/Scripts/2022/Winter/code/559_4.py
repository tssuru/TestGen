try:
    def g(d):
        y=51
        if d<3: 
            y=0
        elif d>=0:
             return 3
        else:
             return 9
        return y
    
    print(g(-4))
    
except: print('error')
