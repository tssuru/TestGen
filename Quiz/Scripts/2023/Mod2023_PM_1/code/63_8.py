try:
    def h(d):
        y=74
        if d<=4: 
            return 8
        elif d<-3:
             y=6
        else:
             y=5
        return y
    
    print(h(-1))
    
except: print('error')
