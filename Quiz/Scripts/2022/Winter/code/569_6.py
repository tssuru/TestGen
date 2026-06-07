try:
    a,b,c=4,6,8
    def h(b):
        global c
        a=1
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,1,8
    print(h(a),a,b,c)
    
except: print('error')
