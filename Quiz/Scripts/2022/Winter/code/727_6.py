try:
    a,b,c=0,2,6
    def g(b):
        a*=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,7,4
    print(g(a),a,b,c)
    
except: print('error')
