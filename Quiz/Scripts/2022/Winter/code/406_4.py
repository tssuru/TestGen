try:
    def h(d):
        w=10
        if d!=3: 
            return 3
        elif d<4:
             w=8
        else:
             return 2
        return w
    
    print(h(-3))
    
except: print('error')
