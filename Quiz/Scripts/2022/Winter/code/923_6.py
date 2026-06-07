try:
    a,b,c=3,5,0
    def g(a):
        a*=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,1,0
    print(g(a),a,b,c)
    
except: print('error')
