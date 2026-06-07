try:
    a,b,c=5,0,9
    def g(b):
        a*=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=3,8,7
    print(g(a),a,b,c)
    
except: print('error')
