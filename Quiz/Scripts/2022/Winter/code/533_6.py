try:
    a,b,c=9,8,3
    def g(a):
        global c
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=6,0,4
    print(g(a),a,b,c)
    
except: print('error')
