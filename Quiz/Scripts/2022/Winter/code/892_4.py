try:
    def h(c):
        v=50
        if c: 
            v=4
        if c>=4:
             return 0
        else:
             v=0
        return v
    
    print(h(-1))
    
except: print('error')
