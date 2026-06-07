try:
    a,b,c=3,9,6
    def h(a):
        global c
        a=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,0,8
    print(h(a),a,b,c)
    
except: print('error')
