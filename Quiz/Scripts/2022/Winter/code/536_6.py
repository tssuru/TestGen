try:
    a,b,c=9,0,7
    def g(a):
        global c
        a=5
        b+=4
        c=1
        return a+b+c
    
    a,b,c=2,4,3
    print(g(a),a,b,c)
    
except: print('error')
