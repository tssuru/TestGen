try:
    def g(a):
        v=93
        if a: 
            v=7
        if a<=-1:
             v=8
        else:
             return 1
        return v
    
    print(g(-8))
    
except: print('error')
