try:
    a,b,c=7,1,8
    def h(b):
        global c
        a=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,3,2
    print(h(a),a,b,c)
    
except: print('error')
