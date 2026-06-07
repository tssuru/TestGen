try:
    a,b,c=7,6,8
    def h(a):
        global c
        a=2
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,7,6
    print(h(a),a,b,c)
    
except: print('error')
