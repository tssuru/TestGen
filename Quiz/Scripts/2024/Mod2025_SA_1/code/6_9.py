try:
    a,b,c=5,9,2
    def g(b):
        a=2
        b+=4
        c=5
        return a+b+c
    
    a,b,c=4,0,7
    print(g(a),a,b,c)
except: print('error')
