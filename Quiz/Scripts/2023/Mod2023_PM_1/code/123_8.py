try:
    def h(c):
        v=61
        if c<=5: 
            v=3
        if c>=-2:
             return 0
        else:
             v=6
        return v
    
    print(h(5))
    
except: print('error')
