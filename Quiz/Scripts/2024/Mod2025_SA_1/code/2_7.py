try:
    def h(c):
        x=21
        if c<=1: 
            x=2
        elif c<-1:
             x=4
        else:
             return 9
        return x
    
    print(h(3))
except: print('error')
