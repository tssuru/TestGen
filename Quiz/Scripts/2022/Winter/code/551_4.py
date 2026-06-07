try:
    def h(c):
        z=81
        if c<=-3: 
            return 9
        if c==0:
             z=5
        else:
             z=1
        return z
    
    print(h(5))
    
except: print('error')
