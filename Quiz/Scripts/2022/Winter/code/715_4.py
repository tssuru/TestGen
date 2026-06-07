try:
    def g(d):
        z=77
        if d<=1: 
            return 4
        elif d<2:
             z=5
        else:
             return 9
        return z
    
    print(g(-9))
    
except: print('error')
