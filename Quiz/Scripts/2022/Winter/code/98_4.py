try:
    def g(d):
        x=97
        if d==1: 
            x=1
        if d>=5:
             return 8
        else:
             x=3
        return x
    
    print(g(-8))
    
except: print('error')
