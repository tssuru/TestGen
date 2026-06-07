try:
    def h(d):
        u=70
        if d<=3: 
            u=3
        if d<-5:
             return 8
        else:
             return 0
        return u
    
    print(h(0))
    
except: print('error')
