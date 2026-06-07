try:
    a,b,c=3,7,4
    def g(a):
        a*=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=6,2,0
    print(g(a),a,b,c)
    
except: print('error')
