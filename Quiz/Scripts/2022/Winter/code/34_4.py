try:
    def g(d):
        v=65
        if d<4: 
            return 8
        if d<=3:
             v=7
        else:
             return 3
        return v
    
    print(g(2))
    
except: print('error')
