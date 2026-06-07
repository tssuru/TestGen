try:
    def f(d):
        w=76
        if d: 
            return 5
        if d<-5:
             w=3
        else:
             w=7
        return w
    
    print(f(-9))
    
except: print('error')
