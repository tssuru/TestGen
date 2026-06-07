try:
    a,b,c=5,0,7
    def h(b):
        global c
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,8,1
    print(h(a),a,b,c)
    
except: print('error')
