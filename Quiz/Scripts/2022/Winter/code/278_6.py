try:
    a,b,c=6,4,7
    def g(b):
        a+=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=1,9,2
    print(g(a),a,b,c)
    
except: print('error')
