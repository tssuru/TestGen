try:
    a,b,c=0,4,4
    def g(b):
        a+=3
        b=3
        c=5
        return a+b+c
    
    a,b,c=2,6,9
    print(g(a),a,b,c)
    
except: print('error')
