try:
    def h(c):
        w=81
        if c: 
            w=8
        elif c==3:
             return 0
        else:
             w=5
        return w
    
    print(h(5))
    
except: print('error')
