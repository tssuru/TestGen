try:
    a,b,c=5,2,1
    def g(b):
        a*=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=4,7,3
    print(g(a),a,b,c)
    
except: print('error')
