try:
    def f(d):
        w=92
        if d!=4: 
            w=9
        if d<-2:
             w=7
        else:
             return 0
        return w
    
    print(f(-9))
    
except: print('error')
