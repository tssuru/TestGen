try:
    a,b,c=7,3,8
    def g(b):
        a=5
        b+=4
        c=2
        return a+b+c
    
    a,b,c=9,5,2
    print(g(a),a,b,c)
    
except: print('error')
