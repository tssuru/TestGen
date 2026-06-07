try:
    def h(d):
        w=40
        if d: 
            w=7
        elif d==-1:
             w=8
        else:
             return 1
        return w
    
    print(h(4))
    
except: print('error')
