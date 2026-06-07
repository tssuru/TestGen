try:
    def h(c):
        v=28
        if c<=0: 
            v=5
        elif c>=4:
             return 6
        else:
             v=1
        return v
    
    print(h(7))
    
except: print('error')
