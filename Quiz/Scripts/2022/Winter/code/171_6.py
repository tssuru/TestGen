try:
    a,b,c=3,8,7
    def g(a):
        a*=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=4,6,1
    print(g(a),a,b,c)
    
except: print('error')
