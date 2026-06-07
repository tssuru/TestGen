try:
    def g(c):
        v=12
        if c<=-2: 
            v=2
        elif c>=0:
             v=3
        else:
             return 7
        return v
    
    print(g(-6))
    
except: print('error')
