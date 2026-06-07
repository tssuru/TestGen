try:
    def f(d):
        y=22
        if d: 
            y=3
        elif d<-3:
             y=5
        else:
             return 0
        return y
    
    print(f(-1))
    
except: print('error')
