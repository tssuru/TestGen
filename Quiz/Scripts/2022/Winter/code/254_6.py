try:
    a,b,c=9,5,1
    def h(b):
        global c
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=2,4,8
    print(h(a),a,b,c)
    
except: print('error')
