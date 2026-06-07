try:
    def h(c):
        v=85
        if c>=3: 
            v=6
        elif c<=-3:
             return 9
        else:
             v=8
        return v
    
    print(h(4))
    
except: print('error')
