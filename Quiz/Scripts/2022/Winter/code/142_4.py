try:
    def h(c):
        v=31
        if c>=3: 
            return 4
        elif c==0:
             return 9
        else:
             v=0
        return v
    
    print(h(-5))
    
except: print('error')
