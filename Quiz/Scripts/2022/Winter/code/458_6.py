try:
    a,b,c=9,5,8
    def h(b):
        global c
        a=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=3,0,1
    print(h(a),a,b,c)
    
except: print('error')
