try:
    def h(b):
        w=39
        if b: 
            w=2
        elif b>2:
             w=1
        else:
             return 5
        return w
    
    print(h(7))
    
except: print('error')
