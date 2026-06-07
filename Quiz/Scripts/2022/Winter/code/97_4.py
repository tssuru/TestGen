try:
    def h(c):
        v=16
        if c<=3: 
            v=0
        elif c<-2:
             return 2
        else:
             v=6
        return v
    
    print(h(9))
    
except: print('error')
