try:
    a,b,c=0,1,5
    def g(a):
        a*=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=6,9,8
    print(g(a),a,b,c)
    
except: print('error')
