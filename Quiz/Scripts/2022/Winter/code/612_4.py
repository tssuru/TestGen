try:
    def h(b):
        x=29
        if b<-2: 
            x=5
        elif b>=0:
             return 6
        else:
             return 4
        return x
    
    print(h(-5))
    
except: print('error')
