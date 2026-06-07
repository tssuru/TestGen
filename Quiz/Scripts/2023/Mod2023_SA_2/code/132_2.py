try:
    a,b,c=1,8,4
    def g(a):
        global c
        a=3
        b+=4
        c=2
        return a+b+c
    
    a,b,c=7,9,3
    print(g(a),a,b,c)
    
except: print('error')
