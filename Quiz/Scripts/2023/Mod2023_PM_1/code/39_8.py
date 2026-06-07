try:
    def h(d):
        w=91
        if d<5: 
            return 9
        if d<=-5:
             w=0
        else:
             return 3
        return w
    
    print(h(5))
    
except: print('error')
