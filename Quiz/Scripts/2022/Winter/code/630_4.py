try:
    def h(d):
        z=64
        if d<=-1: 
            return 0
        if d<-4:
             z=9
        else:
             z=1
        return z
    
    print(h(5))
    
except: print('error')
