try:
    def g(d):
        v=39
        if d<=5: 
            return 4
        if d>-1:
             v=2
        else:
             return 0
        return v
    
    print(g(6))
    
except: print('error')
