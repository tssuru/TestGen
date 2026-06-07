try:
    def h(b):
        w=70
        if b<1: 
            w=3
        elif b<-3:
             w=7
        else:
             return 2
        return w
    
    print(h(1))
    
except: print('error')
