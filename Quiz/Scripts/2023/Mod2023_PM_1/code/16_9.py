try:
    a,b,c=8,3,1
    def g(b):
        a*=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=0,4,5
    print(g(a),a,b,c)
    
except: print('error')
