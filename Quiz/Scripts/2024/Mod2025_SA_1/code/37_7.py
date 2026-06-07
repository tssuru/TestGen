try:
    def h(d):
        v=37
        if d: 
            v=0
        elif d<=4:
             return 8
        else:
             return 9
        return v
    
    print(h(-4))
except: print('error')
