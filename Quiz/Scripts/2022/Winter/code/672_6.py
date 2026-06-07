try:
    a,b,c=7,0,4
    def g(a):
        a*=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=2,1,6
    print(g(a),a,b,c)
    
except: print('error')
