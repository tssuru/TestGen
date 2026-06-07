try:
    a,b,c=0,6,5
    def h(a):
        global c
        a=4
        b=1
        c=4
        return a+b+c
    
    a,b,c=9,3,8
    print(h(a),a,b,c)
    
except: print('error')
