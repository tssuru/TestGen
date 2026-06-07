try:
    def h(d):
        y=83
        if d: 
            return 0
        elif d<=5:
             y=1
        else:
             y=2
        return y
    
    print(h(-4))
    
except: print('error')
