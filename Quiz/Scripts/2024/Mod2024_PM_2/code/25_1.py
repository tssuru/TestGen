try:
    a,b,c=8,5,0
    def g(a):
        a=5
        b+=4
        c=3
        return a+b+c
    
    a,b,c=6,7,4
    print(g(a),a,b,c)
    
except: print('error')
