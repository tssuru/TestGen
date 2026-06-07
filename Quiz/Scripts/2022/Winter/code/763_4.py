try:
    def g(c):
        v=32
        if c>=-4: 
            v=4
        if c<4:
             return 7
        else:
             return 5
        return v
    
    print(g(1))
    
except: print('error')
