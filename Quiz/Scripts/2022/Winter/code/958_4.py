try:
    def g(d):
        w=50
        if d: 
            w=0
        if d<-1:
             return 7
        else:
             w=9
        return w
    
    print(g(-6))
    
except: print('error')
