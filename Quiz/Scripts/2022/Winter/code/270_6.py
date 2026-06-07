try:
    a,b,c=4,0,3
    def g(a):
        a*=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=9,1,8
    print(g(a),a,b,c)
    
except: print('error')
