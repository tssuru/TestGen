try:
    def h(d):
        v=56
        if d<=0: 
            return 5
        elif d>=-1:
             v=0
        else:
             v=2
        return v
    
    print(h(-2))
    
except: print('error')
