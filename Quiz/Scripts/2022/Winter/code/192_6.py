try:
    a,b,c=2,7,1
    def h(b):
        global c
        a+=4
        b=1
        c=3
        return a+b+c
    
    a,b,c=0,6,8
    print(h(a),a,b,c)
    
except: print('error')
