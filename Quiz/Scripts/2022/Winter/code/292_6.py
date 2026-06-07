try:
    a,b,c=5,1,1
    def g(b):
        a*=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=4,9,7
    print(g(a),a,b,c)
    
except: print('error')
