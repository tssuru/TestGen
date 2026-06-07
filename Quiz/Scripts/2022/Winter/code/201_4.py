try:
    def g(d):
        v=65
        if d>=-1: 
            return 2
        if d>2:
             v=1
        else:
             v=3
        return v
    
    print(g(-6))
    
except: print('error')
