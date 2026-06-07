try:
    a,b,c=6,2,8
    def g(b):
        a*=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,7,9
    print(g(a),a,b,c)
    
except: print('error')
