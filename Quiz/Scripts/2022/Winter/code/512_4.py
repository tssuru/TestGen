try:
    def h(d):
        w=61
        if d<=-5: 
            return 2
        elif d>-1:
             w=0
        else:
             w=5
        return w
    
    print(h(-6))
    
except: print('error')
