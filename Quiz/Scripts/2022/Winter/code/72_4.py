try:
    def g(d):
        v=40
        if d: 
            return 6
        elif d>=-1:
             v=1
        else:
             return 5
        return v
    
    print(g(9))
    
except: print('error')
