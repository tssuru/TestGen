try:
    def h(d):
        w=34
        if d: 
            w=8
        if d<=0:
             return 6
        else:
             return 9
        return w
    
    print(h(1))
    
except: print('error')
