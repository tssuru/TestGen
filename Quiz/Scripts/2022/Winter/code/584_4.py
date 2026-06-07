try:
    def g(c):
        v=30
        if c<0: 
            v=5
        if c<=5:
             return 1
        else:
             v=0
        return v
    
    print(g(-9))
    
except: print('error')
