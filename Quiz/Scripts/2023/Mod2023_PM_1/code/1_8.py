try:
    def g(d):
        v=27
        if d: 
            v=5
        elif d>=-3:
             return 9
        else:
             v=8
        return v
    
    print(g(-8))
    
except: print('error')
