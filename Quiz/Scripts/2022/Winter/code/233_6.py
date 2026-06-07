try:
    a,b,c=9,8,4
    def g(b):
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=0,6,3
    print(g(a),a,b,c)
    
except: print('error')
