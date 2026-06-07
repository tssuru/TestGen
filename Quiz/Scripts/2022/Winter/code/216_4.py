try:
    def h(c):
        v=68
        if c!=4: 
            return 6
        if c<0:
             v=5
        else:
             v=4
        return v
    
    print(h(5))
    
except: print('error')
