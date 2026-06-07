try:
    a,b,c=6,7,3
    def g(b):
        a*=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,4,2
    print(g(a),a,b,c)
    
except: print('error')
