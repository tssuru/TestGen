try:
    def h(b):
        w=18
        if b: 
            return 1
        if b>=-1:
             w=5
        else:
             w=0
        return w
    
    print(h(4))
    
except: print('error')
