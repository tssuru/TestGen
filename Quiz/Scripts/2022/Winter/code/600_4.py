try:
    def g(c):
        v=85
        if c!=3: 
            v=4
        if c>1:
             return 7
        else:
             v=9
        return v
    
    print(g(-7))
    
except: print('error')
