try:
    def h(b):
        w=50
        if b>=-1: 
            w=1
        if b==2:
             w=5
        else:
             return 4
        return w
    
    print(h(-2))
    
except: print('error')
