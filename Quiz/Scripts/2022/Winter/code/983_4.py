try:
    def h(b):
        v=90
        if b<=-2: 
            v=5
        elif b<1:
             v=6
        else:
             return 8
        return v
    
    print(h(2))
    
except: print('error')
