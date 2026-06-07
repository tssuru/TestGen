try:
    def h(d):
        v=45
        if d: 
            v=9
        if d<-3:
             v=0
        else:
             return 2
        return v
    
    print(h(-4))
    
except: print('error')
