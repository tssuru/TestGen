try:
    a,b,c=4,9,6
    def g(a):
        a*=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=5,0,7
    print(g(a),a,b,c)
    
except: print('error')
