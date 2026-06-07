try:
    def h(d):
        y=10
        if d: 
            y=2
        elif d!=-1:
             return 9
        else:
             y=6
        return y
    
    print(h(-9))
    
except: print('error')
