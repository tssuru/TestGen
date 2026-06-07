try:
    def h(c):
        x=42
        if c<=-1: 
            return 3
        elif c<-3:
             x=2
        else:
             return 9
        return x
    
    print(h(-1))
    
except: print('error')
