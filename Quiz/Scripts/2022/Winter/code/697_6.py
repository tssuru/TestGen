try:
    a,b,c=7,6,4
    def g(b):
        a*=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=0,1,3
    print(g(a),a,b,c)
    
except: print('error')
